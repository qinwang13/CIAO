/* -*- C++ -*- */
// $Id$

// ============================================================================
//
// = LIBRARY
//    EventComm
//
// = FILENAME
//    Consumer_Input_Handler.h
//
// = AUTHOR
//    Douglas C. Schmidt (schmidt@cs.wustl.edu)
//
// ============================================================================

#if !defined (CONSUMER_INPUT_HANDLER_H)
#define CONSUMER_INPUT_HANDLER_

#include "ace/Service_Config.h"

// Forward declaration.
class Consumer_Handler;

class Consumer_Input_Handler : public ACE_Service_Object
{
  // = TITLE
  //   Handles input events generated from a keyboard.
  //
  // = DESCRIPTION
  //    This class holds a <Consumer_Handler> object. It accepts input from the user
  //    and passes events to the <Notifier>. It also initiates shutdown.
  //
public:
  // Initialization and termination methods.
  Consumer_Input_Handler(void);

  ~Consumer_Input_Handler (void);

  int initialize (Consumer_Handler *,
			  ACE_HANDLE h = 0);

  virtual int handle_input (ACE_HANDLE);
  // Dispatch the callback when events occur.

  virtual int handle_close (ACE_HANDLE = ACE_INVALID_HANDLE,
			    ACE_Reactor_Mask = ACE_Event_Handler::NULL_MASK);
  // Close down the handler.

  int consumer_initiated_shutdown (void);
  // Report whether the Consumer initiated the shutdown.

  void consumer_initiated_shutdown (int);
  // Indicate that the Consumer initiated the shutdown.

private:
  virtual ACE_HANDLE get_handle (void) const;

  ACE_HANDLE handle_;
  // ACE_HANDLE where the input comes from.

  Consumer_Handler *receiver_handler_;
  // Pointer to the <Consumer_Handler> that receives notifications
  // from the <Event_Comm::Notifier>.

  int consumer_initiated_shutdown_;
  // Keep track of whether the Consumer initiated the shutdown.
};

#endif /* CONSUMER_INPUT_HANDLER_H */
