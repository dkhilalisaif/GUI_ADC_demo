/*******************************************************************************
*
* E M B E D D E D   W I Z A R D   P R O J E C T
*
*                                                Copyright (c) TARA Systems GmbH
*                                    written by Paul Banach and Manfred Schweyer
*
********************************************************************************
*
* This file was generated automatically by Embedded Wizard Studio.
*
* Please do not make any modifications of this file! The modifications are lost
* when the file is generated again by Embedded Wizard Studio!
*
* The template of this heading text can be found in the file 'head.ewt' in the
* directory 'Platforms' of your Embedded Wizard installation directory. If you
* wish to adapt this text, please copy the template file 'head.ewt' into your
* project directory and edit the copy only. Please avoid any modifications of
* the original template file!
*
* Version  : 10.00
* Profile  : STM32F746
* Platform : STM.STM32.RGB565
*
*******************************************************************************/

#include "ewlocale.h"
#include "_ApplicationApplication.h"
#include "_ApplicationDeviceClass.h"
#include "_CorePropertyObserver.h"
#include "_CoreSystemEvent.h"
#include "_CoreView.h"
#include "_ResourcesFont.h"
#include "_ViewsRectangle.h"
#include "_ViewsText.h"
#include "_WidgetSetValueDisplay.h"
#include "_WidgetSetValueDisplayConfig.h"
#include "Application.h"
#include "Resources.h"
#include "WidgetSet.h"

/* Compressed strings for the language 'Default'. */
static const unsigned int _StringsDefault0[] =
{
  0x00000064, /* ratio 88.00 % */
  0xB8001900, 0x00082452, 0x00860022, 0x0C800100, 0xDA003280, 0x40037800, 0x1C8B8007,
  0x02691606, 0x87C34C20, 0x01DC010B, 0x1D000690, 0xB2426800, 0x0EC00899, 0xDD258648,
  0xA002A484, 0x2599000E, 0x78EC90E7, 0x8D020011, 0x5CB0AD12, 0xCF67B279, 0x00000080,
  0x00000000
};

/* Constant values used in this 'C' module only. */
static const XRect _Const0000 = {{ 0, 0 }, { 480, 272 }};
static const XColor _Const0001 = { 0x00, 0x00, 0x00, 0xFF };
static const XRect _Const0002 = {{ 17, 17 }, { 165, 52 }};
static const XStringRes _Const0003 = { _StringsDefault0, 0x0002 };
static const XColor _Const0004 = { 0x86, 0xC7, 0x6E, 0xFF };
static const XRect _Const0005 = {{ 0, 238 }, { 251, 268 }};
static const XStringRes _Const0006 = { _StringsDefault0, 0x000E };
static const XRect _Const0007 = {{ 91, 76 }, { 394, 176 }};
static const XColor _Const0008 = { 0x66, 0x66, 0x66, 0xDE };
static const XRect _Const0009 = {{ 100, 101 }, { 381, 151 }};
static const XStringRes _Const000A = { _StringsDefault0, 0x002A };

/* Initializer for the class 'Application::Application' */
void ApplicationApplication__Init( ApplicationApplication _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreRoot__Init( &_this->_Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_GCT = EW_CLASS_GCT( ApplicationApplication );

  /* ... then construct all embedded objects */
  ViewsRectangle__Init( &_this->Rectangle, &_this->_XObject, 0 );
  ViewsText__Init( &_this->Text, &_this->_XObject, 0 );
  CorePropertyObserver__Init( &_this->PropertyObserver, &_this->_XObject, 0 );
  ViewsText__Init( &_this->Text1, &_this->_XObject, 0 );
  ViewsRectangle__Init( &_this->Rectangle1, &_this->_XObject, 0 );
  WidgetSetValueDisplay__Init( &_this->VoltageDisplay, &_this->_XObject, 0 );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( ApplicationApplication );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0000 );
  CoreRectView__OnSetBounds( &_this->Rectangle, _Const0000 );
  ViewsRectangle_OnSetColor( &_this->Rectangle, _Const0001 );
  CoreRectView__OnSetBounds( &_this->Text, _Const0002 );
  ViewsText_OnSetString( &_this->Text, EwLoadString( &_Const0003 ));
  ViewsText_OnSetColor( &_this->Text, _Const0004 );
  CoreRectView__OnSetBounds( &_this->Text1, _Const0005 );
  ViewsText_OnSetString( &_this->Text1, EwLoadString( &_Const0006 ));
  CoreRectView__OnSetBounds( &_this->Rectangle1, _Const0007 );
  ViewsRectangle_OnSetColor( &_this->Rectangle1, _Const0008 );
  CoreRectView__OnSetBounds( &_this->VoltageDisplay, _Const0009 );
  WidgetSetValueDisplay_OnSetUnit( &_this->VoltageDisplay, EwLoadString( &_Const000A ));
  WidgetSetValueDisplay_OnSetPrecision( &_this->VoltageDisplay, 1 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Rectangle ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Text ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Text1 ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Rectangle1 ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->VoltageDisplay ), 0 );
  ViewsText_OnSetFont( &_this->Text, EwLoadResource( &ApplicationFont, ResourcesFont ));
  _this->Device = EwGetAutoObject( &ApplicationDevice, ApplicationDeviceClass );
  _this->PropertyObserver.OnEvent = EwNewSlot( _this, ApplicationApplication_onEvent );
  CorePropertyObserver_OnSetOutlet( &_this->PropertyObserver, EwNewRef( EwGetAutoObject( 
  &ApplicationDevice, ApplicationDeviceClass ), ApplicationDeviceClass_OnGetADCValue, 
  ApplicationDeviceClass_OnSetADCValue ));
  ViewsText_OnSetFont( &_this->Text1, EwLoadResource( &ResourcesFontMedium, ResourcesFont ));
  WidgetSetValueDisplay_OnSetAppearance( &_this->VoltageDisplay, EwGetAutoObject( 
  &WidgetSetValueDisplay_Large, WidgetSetValueDisplayConfig ));
}

/* Re-Initializer for the class 'Application::Application' */
void ApplicationApplication__ReInit( ApplicationApplication _this )
{
  /* At first re-initialize the super class ... */
  CoreRoot__ReInit( &_this->_Super );

  /* ... then re-construct all embedded objects */
  ViewsRectangle__ReInit( &_this->Rectangle );
  ViewsText__ReInit( &_this->Text );
  CorePropertyObserver__ReInit( &_this->PropertyObserver );
  ViewsText__ReInit( &_this->Text1 );
  ViewsRectangle__ReInit( &_this->Rectangle1 );
  WidgetSetValueDisplay__ReInit( &_this->VoltageDisplay );
}

/* Finalizer method for the class 'Application::Application' */
void ApplicationApplication__Done( ApplicationApplication _this )
{
  /* Finalize this class */
  _this->_Super._VMT = EW_CLASS( CoreRoot );

  /* Finalize all embedded objects */
  ViewsRectangle__Done( &_this->Rectangle );
  ViewsText__Done( &_this->Text );
  CorePropertyObserver__Done( &_this->PropertyObserver );
  ViewsText__Done( &_this->Text1 );
  ViewsRectangle__Done( &_this->Rectangle1 );
  WidgetSetValueDisplay__Done( &_this->VoltageDisplay );

  /* Don't forget to deinitialize the super class ... */
  CoreRoot__Done( &_this->_Super );
}

/* This slot method is executed when the associated property observer 'PropertyObserver' 
   is notified. */
void ApplicationApplication_onEvent( ApplicationApplication _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  WidgetSetValueDisplay_OnSetCurrentValue( &_this->VoltageDisplay, ( _this->Device->ADCValue 
  * 3300 ) / 255 );
}

/* Variants derived from the class : 'Application::Application' */
EW_DEFINE_CLASS_VARIANTS( ApplicationApplication )
EW_END_OF_CLASS_VARIANTS( ApplicationApplication )

/* Virtual Method Table (VMT) for the class : 'Application::Application' */
EW_DEFINE_CLASS( ApplicationApplication, CoreRoot, Device, Rectangle, Rectangle, 
                 Rectangle, _None, _None, "Application::Application" )
  CoreRectView_initLayoutContext,
  CoreRoot_Draw,
  CoreGroup_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreRoot_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreRoot_OnSetFocus,
  CoreRoot_DispatchEvent,
  CoreRoot_BroadcastEvent,
  CoreGroup_UpdateViewState,
  CoreRoot_InvalidateArea,
EW_END_OF_CLASS( ApplicationApplication )

/* Include a file containing the font resource : 'Application::Font' */
#include "_ApplicationFont.h"

/* Table with links to derived variants of the font resource : 'Application::Font' */
EW_RES_WITHOUT_VARIANTS( ApplicationFont )

/* User defined inline code: 'Application::Inline' */
/* include the device driver header file to get access for the device class */
#include "DeviceDriver.h"

/* Initializer for the class 'Application::DeviceClass' */
void ApplicationDeviceClass__Init( ApplicationDeviceClass _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  TemplatesDeviceClass__Init( &_this->_Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_GCT = EW_CLASS_GCT( ApplicationDeviceClass );

  /* ... then construct all embedded objects */
  CoreSystemEvent__Init( &_this->SystemEvent, &_this->_XObject, 0 );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( ApplicationDeviceClass );
}

/* Re-Initializer for the class 'Application::DeviceClass' */
void ApplicationDeviceClass__ReInit( ApplicationDeviceClass _this )
{
  /* At first re-initialize the super class ... */
  TemplatesDeviceClass__ReInit( &_this->_Super );

  /* ... then re-construct all embedded objects */
  CoreSystemEvent__ReInit( &_this->SystemEvent );
}

/* Finalizer method for the class 'Application::DeviceClass' */
void ApplicationDeviceClass__Done( ApplicationDeviceClass _this )
{
  /* Finalize this class */
  _this->_Super._VMT = EW_CLASS( TemplatesDeviceClass );

  /* Finalize all embedded objects */
  CoreSystemEvent__Done( &_this->SystemEvent );

  /* Don't forget to deinitialize the super class ... */
  TemplatesDeviceClass__Done( &_this->_Super );
}

/* This method is intended to be called by the device to notify the GUI application 
   about an alternation of its setting or state value. */
void ApplicationDeviceClass_UpdateADCValue( ApplicationDeviceClass _this, XInt32 
  aNewValue )
{
  if ( aNewValue != _this->ADCValue )
  {
    _this->ADCValue = aNewValue;
    EwNotifyRefObservers( EwNewRef( _this, ApplicationDeviceClass_OnGetADCValue, 
      ApplicationDeviceClass_OnSetADCValue ), 0 );
  }
}

/* Wrapper function for the non virtual method : 'Application::DeviceClass.UpdateADCValue()' */
void ApplicationDeviceClass__UpdateADCValue( void* _this, XInt32 aNewValue )
{
  ApplicationDeviceClass_UpdateADCValue((ApplicationDeviceClass)_this, aNewValue );
}

/* This method is intended to be called by the device to notify the GUI application 
   about a particular system event. */
void ApplicationDeviceClass_TriggerEvent( ApplicationDeviceClass _this )
{
  CoreSystemEvent_Trigger( &_this->SystemEvent, 0, 0 );
}

/* Wrapper function for the non virtual method : 'Application::DeviceClass.TriggerEvent()' */
void ApplicationDeviceClass__TriggerEvent( void* _this )
{
  ApplicationDeviceClass_TriggerEvent((ApplicationDeviceClass)_this );
}

/* Default onget method for the property 'ADCValue' */
XInt32 ApplicationDeviceClass_OnGetADCValue( ApplicationDeviceClass _this )
{
  return _this->ADCValue;
}

/* Default onset method for the property 'ADCValue' */
void ApplicationDeviceClass_OnSetADCValue( ApplicationDeviceClass _this, XInt32 
  value )
{
  _this->ADCValue = value;
}

/* Variants derived from the class : 'Application::DeviceClass' */
EW_DEFINE_CLASS_VARIANTS( ApplicationDeviceClass )
EW_END_OF_CLASS_VARIANTS( ApplicationDeviceClass )

/* Virtual Method Table (VMT) for the class : 'Application::DeviceClass' */
EW_DEFINE_CLASS( ApplicationDeviceClass, TemplatesDeviceClass, SystemEvent, SystemEvent, 
                 SystemEvent, SystemEvent, ADCValue, ADCValue, "Application::DeviceClass" )
EW_END_OF_CLASS( ApplicationDeviceClass )

/* User defined auto object: 'Application::Device' */
EW_DEFINE_AUTOOBJECT( ApplicationDevice, ApplicationDeviceClass )

/* Initializer for the auto object 'Application::Device' */
void ApplicationDevice__Init( ApplicationDeviceClass _this )
{
  EW_UNUSED_ARG( _this );
}

/* Table with links to derived variants of the auto object : 'Application::Device' */
EW_DEFINE_AUTOOBJECT_VARIANTS( ApplicationDevice )
EW_END_OF_AUTOOBJECT_VARIANTS( ApplicationDevice )

/* Embedded Wizard */
