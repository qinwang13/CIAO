// -*- C++ -*-
//
// $Id$

// ****  Code generated by the The ACE ORB (TAO) IDL Compiler ****
// TAO and the TAO IDL Compiler have been developed by:
//       Center for Distributed Object Computing
//       Washington University
//       St. Louis, MO
//       USA
//       http://www.cs.wustl.edu/~schmidt/doc-center.html
// and
//       Distributed Object Computing Laboratory
//       University of California at Irvine
//       Irvine, CA
//       USA
//       http://doc.ece.uci.edu/
//
// Information about TAO is available at:
//     http://www.cs.wustl.edu/~schmidt/TAO.html

#include "BoundsC.h"

#include "tao/Stub.h"
#include "tao/Invocation.h"
#include "tao/PortableInterceptor.h"

#if TAO_HAS_INTERCEPTORS == 1
#include "tao/RequestInfo_Util.h"
#include "tao/ClientRequestInfo_i.h"
#include "tao/ClientInterceptorAdapter.h"
#endif  /* TAO_HAS_INTERCEPTORS == 1 */

#if defined (__BORLANDC__)
#pragma option -w-rvl -w-rch -w-ccc -w-aus -w-sig
#endif /* __BORLANDC__ */

#if !defined (__ACE_INLINE__)
#include "BoundsC.i"
#endif /* !defined INLINE */

// Default constructor.
CORBA::Bounds::Bounds (void)
  : CORBA_UserException ("IDL:omg.org/CORBA/Bounds:1.0",
                         "Bounds")
{
}

// Destructor - all members are of self managing types.
CORBA::Bounds::~Bounds (void)
{
}

// Copy constructor.
CORBA::Bounds::Bounds (const ::CORBA::Bounds &_tao_excp)
  : CORBA_UserException (_tao_excp._rep_id (),
                         _tao_excp._name ())
{
}

// Assignment operator.
CORBA::Bounds&
CORBA::Bounds::operator= (const ::CORBA::Bounds &_tao_excp)
{
  this->CORBA_UserException::operator= (_tao_excp);
  return *this;
}

void CORBA::Bounds::_tao_any_destructor (void *_tao_void_pointer)
{
  Bounds *tmp = ACE_static_cast (Bounds*, _tao_void_pointer);
  delete tmp;
}

CORBA::Bounds *
CORBA::Bounds::_downcast (CORBA::Exception *exc)
{
  if (!ACE_OS::strcmp ("IDL:omg.org/CORBA/Bounds:1.0", exc->_rep_id ()))
    {
      return ACE_dynamic_cast (Bounds *, exc);
    }
  else
    {
      return 0;
    }
}

CORBA::Exception *CORBA::Bounds::_alloc (void)
{
  CORBA::Exception *retval = 0;
  ACE_NEW_RETURN (retval, ::CORBA::Bounds, 0);
  return retval;
}

CORBA::Exception *
CORBA::Bounds::_tao_duplicate (void) const
{
  CORBA::Exception *result;
  ACE_NEW_RETURN (
      result,
      CORBA::Bounds (*this),
      0
    );
  return result;
}

void CORBA::Bounds::_raise ()
{
  TAO_RAISE (*this);
}

void CORBA::Bounds::_tao_encode (
    TAO_OutputCDR &cdr
    ACE_ENV_ARG_DECL
  ) const
{
  if (cdr << *this)
    {
      return;
    }
  
  ACE_THROW (CORBA::MARSHAL ());
}

void CORBA::Bounds::_tao_decode (
    TAO_InputCDR &cdr
    ACE_ENV_ARG_DECL
  )
{
  if (cdr >> *this)
    {
      return;
    }
  
  ACE_THROW (CORBA::MARSHAL ());
}

static const CORBA::Long _oc_CORBA_Bounds[] =
{
  TAO_ENCAP_BYTE_ORDER, // byte order
  29,
  ACE_NTOHL (0x49444c3a), 
  ACE_NTOHL (0x6f6d672e), 
  ACE_NTOHL (0x6f72672f), 
  ACE_NTOHL (0x434f5242), 
  ACE_NTOHL (0x412f426f), 
  ACE_NTOHL (0x756e6473), 
  ACE_NTOHL (0x3a312e30), 
  ACE_NTOHL (0x0),  // repository ID = IDL:omg.org/CORBA/Bounds:1.0
  7,
  ACE_NTOHL (0x426f756e), 
  ACE_NTOHL (0x64730000),  // name = Bounds
  0, // member count
};

static CORBA::TypeCode _tc_TAO_tc_CORBA_Bounds (
    CORBA::tk_except,
    sizeof (_oc_CORBA_Bounds),
    (char *) &_oc_CORBA_Bounds,
    0,
    sizeof (CORBA::Bounds)
  );

TAO_NAMESPACE_TYPE (CORBA::TypeCode_ptr)
TAO_NAMESPACE_BEGIN (CORBA)
TAO_NAMESPACE_DEFINE (::CORBA::TypeCode_ptr, _tc_Bounds, &_tc_TAO_tc_CORBA_Bounds)
TAO_NAMESPACE_END


// TAO extension - the virtual _type method.
CORBA::TypeCode_ptr CORBA::Bounds::_type (void) const
{
  return ::CORBA::_tc_Bounds;
}

void operator<<= (CORBA::Any &_tao_any, const CORBA::Bounds &_tao_elem) // copying
{
  TAO_OutputCDR stream;
  stream << _tao_elem;
  _tao_any._tao_replace (
      CORBA::_tc_Bounds,
      TAO_ENCAP_BYTE_ORDER,
      stream.begin ()
    );
}

void operator<<= (CORBA::Any &_tao_any, CORBA::Bounds *_tao_elem) // non copying
{
  TAO_OutputCDR stream;
  stream << *_tao_elem;
  _tao_any._tao_replace (
      CORBA::_tc_Bounds,
      TAO_ENCAP_BYTE_ORDER,
      stream.begin (),
      1,
      _tao_elem,
      CORBA::Bounds::_tao_any_destructor
    );
}

CORBA::Boolean operator>>= (const CORBA::Any &_tao_any, CORBA::Bounds *&_tao_elem)
{
  return _tao_any >>= ACE_const_cast(
      const CORBA::Bounds*&,
      _tao_elem
    );
}

CORBA::Boolean operator>>= (const CORBA::Any &_tao_any, const CORBA::Bounds *&_tao_elem)
{
  _tao_elem = 0;
  ACE_TRY_NEW_ENV
  {
    CORBA::TypeCode_var type = _tao_any.type ();
    
    CORBA::Boolean result = type->equivalent (CORBA::_tc_Bounds ACE_ENV_ARG_PARAMETER);
    ACE_TRY_CHECK;
    
    if (!result)
      return 0; // not equivalent
    
    if (_tao_any.any_owns_data ())
    {
      _tao_elem = (CORBA::Bounds *)_tao_any.value ();
      return 1;
    }
    else
    {
      CORBA::Bounds *tmp;
      ACE_NEW_RETURN (tmp, CORBA::Bounds, 0);
      TAO_InputCDR stream (
          _tao_any._tao_get_cdr (),
          _tao_any._tao_byte_order ()
        );
      CORBA::String_var interface_repository_id;
      if (!(stream >> interface_repository_id.out ()))
        return 0;
      if (ACE_OS::strcmp (
          interface_repository_id.in (),
          "IDL:omg.org/CORBA/Bounds:1.0"))
        return 0;
      if (stream >> *tmp)
      {
        ((CORBA::Any *)&_tao_any)->_tao_replace (
            CORBA::_tc_Bounds,
            1,
            tmp,
            CORBA::Bounds::_tao_any_destructor
          );
        _tao_elem = tmp;
        return 1;
      }
      else
      {
        delete tmp;
      }
    }
  }
  ACE_CATCHANY
  {
  }
  ACE_ENDTRY;
  return 0;
}

