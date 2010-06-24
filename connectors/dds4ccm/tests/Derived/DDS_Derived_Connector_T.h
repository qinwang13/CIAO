// $Id$

#if !defined DERIVED_CONNECTOR_T
#define DERIVED_CONNECTOR_T

#include "connectors/dds4ccm/impl/dds/DDS_Event_Connector_T.h"
#include "connectors/dds4ccm/impl/dds/DDS_State_Connector_T.h"

template <typename DDS_TYPE, typename CCM_TYPE, bool FIXED>
class MyEvent_Connector_T
  : public virtual DDS_Event_Connector_T<DDS_TYPE, CCM_TYPE, FIXED>
{
  virtual ::CCM_fooA_ptr get_my_foo (void)
  {
    return ::CCM_fooA::_nil ();
  }
};

template <typename DDS_TYPE, typename CCM_TYPE, bool FIXED>
class MyState_Connector_T
  : public virtual DDS_State_Connector_T<DDS_TYPE, CCM_TYPE, FIXED>
{
  virtual ::CCM_fooB_ptr get_my_foo (void)
  {
    return ::CCM_fooB::_nil ();
  }
};

#endif
