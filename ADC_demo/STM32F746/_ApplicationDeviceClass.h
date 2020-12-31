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

#ifndef _ApplicationDeviceClass_H
#define _ApplicationDeviceClass_H

#ifdef __cplusplus
  extern "C"
  {
#endif

#include "ewrte.h"
#if EW_RTE_VERSION != 0x000A0000
  #error Wrong version of Embedded Wizard Runtime Environment.
#endif

#include "ewgfx.h"
#if EW_GFX_VERSION != 0x000A0000
  #error Wrong version of Embedded Wizard Graphics Engine.
#endif

#include "_CoreSystemEvent.h"
#include "_TemplatesDeviceClass.h"

/* Forward declaration of the class Application::DeviceClass */
#ifndef _ApplicationDeviceClass_
  EW_DECLARE_CLASS( ApplicationDeviceClass )
#define _ApplicationDeviceClass_
#endif


/* Deklaration of class : 'Application::DeviceClass' */
EW_DEFINE_FIELDS( ApplicationDeviceClass, TemplatesDeviceClass )
  EW_OBJECT  ( SystemEvent,     CoreSystemEvent )
  EW_PROPERTY( ADCValue,        XInt32 )
EW_END_OF_FIELDS( ApplicationDeviceClass )

/* Virtual Method Table (VMT) for the class : 'Application::DeviceClass' */
EW_DEFINE_METHODS( ApplicationDeviceClass, TemplatesDeviceClass )
EW_END_OF_METHODS( ApplicationDeviceClass )

/* This method is intended to be called by the device to notify the GUI application 
   about an alternation of its setting or state value. */
void ApplicationDeviceClass_UpdateADCValue( ApplicationDeviceClass _this, XInt32 
  aNewValue );

/* Wrapper function for the non virtual method : 'Application::DeviceClass.UpdateADCValue()' */
void ApplicationDeviceClass__UpdateADCValue( void* _this, XInt32 aNewValue );

/* The following define announces the presence of the method Application::DeviceClass.UpdateADCValue(). */
#define _ApplicationDeviceClass__UpdateADCValue_

/* This method is intended to be called by the device to notify the GUI application 
   about a particular system event. */
void ApplicationDeviceClass_TriggerEvent( ApplicationDeviceClass _this );

/* Wrapper function for the non virtual method : 'Application::DeviceClass.TriggerEvent()' */
void ApplicationDeviceClass__TriggerEvent( void* _this );

/* The following define announces the presence of the method Application::DeviceClass.TriggerEvent(). */
#define _ApplicationDeviceClass__TriggerEvent_

/* Default onget method for the property 'ADCValue' */
XInt32 ApplicationDeviceClass_OnGetADCValue( ApplicationDeviceClass _this );

/* Default onset method for the property 'ADCValue' */
void ApplicationDeviceClass_OnSetADCValue( ApplicationDeviceClass _this, XInt32 
  value );

#ifdef __cplusplus
  }
#endif

#endif /* _ApplicationDeviceClass_H */

/* Embedded Wizard */
