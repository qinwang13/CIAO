// $Id$

#include "Null_Component_exec.h"
#include <iostream>

using namespace std;

namespace CIAO_Null_Component_Impl
{
  //==================================================================
  // Facet Executor Implementation Class:   Null_Interface_exec_i
  //==================================================================

  Null_Interface_exec_i::Null_Interface_exec_i (void)
  {
  }

  Null_Interface_exec_i::~Null_Interface_exec_i (void)
  {
  }

  // Operations from ::Null_Interface

  void
  Null_Interface_exec_i::null_operation ()
  {
    // Your code here.
  }

  //==================================================================
  // Component Executor Implementation Class:   Null_Component_exec_i
  //==================================================================

  Null_Component_exec_i::Null_Component_exec_i (void)
  {
  }

  Null_Component_exec_i::~Null_Component_exec_i (void)
  {
  }

  // Supported or inherited operations.

  // Attribute operations.

  // Port operations.

  ::CCM_Null_Interface_ptr
  Null_Component_exec_i::get_null_facet ()
  {
    // Your code here.
    return ::CCM_Null_Interface::_nil ();
  }

  // Operations from Components::SessionComponent

  void
  Null_Component_exec_i::set_session_context (
    ::Components::SessionContext_ptr ctx)
  {
    this->context_ =
      ::CCM_Null_Component_Context::_narrow (ctx);

    if (CORBA::is_nil (this->context_.in ()))
    {
      throw ::CORBA::INTERNAL ();
    }
  }

  void
  Null_Component_exec_i::configuration_complete ()
  {
    // Your code here.
  }

  void
  Null_Component_exec_i::ccm_activate ()
  {
    // Your code here.
    cout << "Abdul activating YAAAAAY" << endl << endl<< endl << endl << endl;
  }

  void
  Null_Component_exec_i::ccm_passivate ()
  {
    // Your code here.
  }

  void
  Null_Component_exec_i::ccm_remove ()
  {
    // Your code here.
  }

  extern "C" NULL_COMPONENT_EXEC_Export ::Components::EnterpriseComponent_ptr
  create_Null_Component_Impl (void)
  {
    ::Components::EnterpriseComponent_ptr retval =
      ::Components::EnterpriseComponent::_nil ();

    ACE_NEW_RETURN (
      retval,
      Null_Component_exec_i,
      ::Components::EnterpriseComponent::_nil ());

    return retval;
  }

  //==================================================================
  // Home Executor Implementation Class:   Null_ComponentHome_exec_i
  //==================================================================

  Null_ComponentHome_exec_i::Null_ComponentHome_exec_i (void)
  {
  }

  Null_ComponentHome_exec_i::~Null_ComponentHome_exec_i (void)
  {
  }

  // Supported or inherited operations.

  // Home operations.

  // Factory and finder operations.

  // Attribute operations.

  // Implicit operations.

  ::Components::EnterpriseComponent_ptr
  Null_ComponentHome_exec_i::create ()
  {
    ::Components::EnterpriseComponent_ptr retval =
      ::Components::EnterpriseComponent::_nil ();

    ACE_NEW_THROW_EX (
      retval,
      Null_Component_exec_i,
      ::CORBA::NO_MEMORY ());

    return retval;
  }

  extern "C" NULL_COMPONENT_EXEC_Export ::Components::HomeExecutorBase_ptr
  create_Null_ComponentHome_Impl (void)
  {
    ::Components::HomeExecutorBase_ptr retval =
      ::Components::HomeExecutorBase::_nil ();

    ACE_NEW_RETURN (
      retval,
      Null_ComponentHome_exec_i,
      ::Components::HomeExecutorBase::_nil ());

    return retval;
  }
}

