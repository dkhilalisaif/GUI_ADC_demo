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
#include "_CoreView.h"
#include "_ResourcesFont.h"
#include "_ViewsText.h"
#include "_WidgetSetValueDisplay.h"
#include "_WidgetSetValueDisplayConfig.h"
#include "_WidgetSetWidgetConfig.h"
#include "Core.h"
#include "Resources.h"
#include "Views.h"
#include "WidgetSet.h"

/* Compressed strings for the language 'Default'. */
static const unsigned int _StringsDefault0[] =
{
  0x00000014, /* ratio 120.00 % */
  0xB8000900, 0x8005C452, 0xB6090283, 0x60F0C838, 0x00000040, 0x00000000
};

/* Constant values used in this 'C' module only. */
static const XColor _Const0000 = { 0xA7, 0xA9, 0xAC, 0xFF };
static const XColor _Const0001 = { 0xC4, 0xC6, 0xC9, 0xFF };
static const XPoint _Const0002 = { 90, 50 };
static const XColor _Const0003 = { 0x00, 0x00, 0x00, 0xFF };
static const XStringRes _Const0004 = { _StringsDefault0, 0x0002 };
static const XStringRes _Const0005 = { _StringsDefault0, 0x0006 };
static const XRect _Const0006 = {{ 0, 0 }, { 200, 30 }};
static const XColor _Const0007 = { 0xFF, 0xFF, 0xFF, 0xFF };

/* This autoobject provides the default customization for the 'value display' widget 
   (WidgetSet::ValueDisplay) in its large size variant. Widgets using this configuration 
   display the value and unit aligned at the right widget edge. */
EW_DEFINE_AUTOOBJECT( WidgetSetValueDisplay_Large, WidgetSetValueDisplayConfig )

/* Initializer for the auto object 'WidgetSet::ValueDisplay_Large' */
void WidgetSetValueDisplay_Large__Init( WidgetSetValueDisplayConfig _this )
{
  WidgetSetValueDisplayConfig_OnSetValueMarginRight( _this, 15 );
  WidgetSetValueDisplayConfig_OnSetValueColorNegative( _this, _Const0000 );
  WidgetSetValueDisplayConfig_OnSetValueColorPositive( _this, _Const0000 );
  WidgetSetValueDisplayConfig_OnSetValueAlignment( _this, ViewsTextAlignmentAlignHorzRight 
  | ViewsTextAlignmentAlignVertCenter );
  WidgetSetValueDisplayConfig_OnSetValueFont( _this, EwLoadResource( &ResourcesFontExtraLarge, 
  ResourcesFont ));
  WidgetSetValueDisplayConfig_OnSetUnitColorNegative( _this, _Const0001 );
  WidgetSetValueDisplayConfig_OnSetUnitColorPositive( _this, _Const0001 );
  WidgetSetValueDisplayConfig_OnSetUnitAlignment( _this, ViewsTextAlignmentAlignHorzRight 
  | ViewsTextAlignmentAlignVertCenter );
  WidgetSetValueDisplayConfig_OnSetUnitFont( _this, EwLoadResource( &ResourcesFontExtraLarge, 
  ResourcesFont ));
  WidgetSetValueDisplayConfig_OnSetFormatPlusSign( _this, 0 );
  WidgetSetValueDisplayConfig_OnSetLayout( _this, WidgetSetValueDisplayLayoutAlignValueLeftToUnit );
  WidgetSetValueDisplayConfig_OnSetWidgetMinSize( _this, _Const0002 );
}

/* Table with links to derived variants of the auto object : 'WidgetSet::ValueDisplay_Large' */
EW_DEFINE_AUTOOBJECT_VARIANTS( WidgetSetValueDisplay_Large )
EW_END_OF_AUTOOBJECT_VARIANTS( WidgetSetValueDisplay_Large )

/* Initializer for the class 'WidgetSet::ValueDisplayConfig' */
void WidgetSetValueDisplayConfig__Init( WidgetSetValueDisplayConfig _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  WidgetSetWidgetConfig__Init( &_this->_Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_GCT = EW_CLASS_GCT( WidgetSetValueDisplayConfig );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( WidgetSetValueDisplayConfig );

  /* ... and initialize objects, variables, properties, etc. */
  _this->ValueColorNegative = _Const0003;
  _this->ValueColorPositive = _Const0003;
  _this->ValueAlignment = ViewsTextAlignmentAlignHorzCenter | ViewsTextAlignmentAlignVertCenter;
  _this->UnitColorNegative = _Const0003;
  _this->UnitColorPositive = _Const0003;
  _this->UnitAlignment = ViewsTextAlignmentAlignHorzCenter | ViewsTextAlignmentAlignVertCenter;
  _this->FormatDecimalSign = EwShareString( EwLoadString( &_Const0004 ));
  _this->FormatMinusSign = EwShareString( EwLoadString( &_Const0005 ));
  _this->Layout = WidgetSetValueDisplayLayoutUnitAndValueAreIndependent;
}

/* Re-Initializer for the class 'WidgetSet::ValueDisplayConfig' */
void WidgetSetValueDisplayConfig__ReInit( WidgetSetValueDisplayConfig _this )
{
  /* At first re-initialize the super class ... */
  WidgetSetWidgetConfig__ReInit( &_this->_Super );
}

/* Finalizer method for the class 'WidgetSet::ValueDisplayConfig' */
void WidgetSetValueDisplayConfig__Done( WidgetSetValueDisplayConfig _this )
{
  /* Finalize this class */
  _this->_Super._VMT = EW_CLASS( WidgetSetWidgetConfig );

  /* Don't forget to deinitialize the super class ... */
  WidgetSetWidgetConfig__Done( &_this->_Super );
}

/* 'C' function for method : 'WidgetSet::ValueDisplayConfig.OnSetValueMarginRight()' */
void WidgetSetValueDisplayConfig_OnSetValueMarginRight( WidgetSetValueDisplayConfig _this, 
  XInt32 value )
{
  if ( _this->ValueMarginRight == value )
    return;

  _this->ValueMarginRight = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ValueDisplayConfig.OnSetValueColorNegative()' */
void WidgetSetValueDisplayConfig_OnSetValueColorNegative( WidgetSetValueDisplayConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->ValueColorNegative, value ))
    return;

  _this->ValueColorNegative = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ValueDisplayConfig.OnSetValueColorPositive()' */
void WidgetSetValueDisplayConfig_OnSetValueColorPositive( WidgetSetValueDisplayConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->ValueColorPositive, value ))
    return;

  _this->ValueColorPositive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ValueDisplayConfig.OnSetValueAlignment()' */
void WidgetSetValueDisplayConfig_OnSetValueAlignment( WidgetSetValueDisplayConfig _this, 
  XSet value )
{
  if ( _this->ValueAlignment == value )
    return;

  _this->ValueAlignment = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ValueDisplayConfig.OnSetValueFont()' */
void WidgetSetValueDisplayConfig_OnSetValueFont( WidgetSetValueDisplayConfig _this, 
  ResourcesFont value )
{
  if ( _this->ValueFont == value )
    return;

  _this->ValueFont = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ValueDisplayConfig.OnSetUnitColorNegative()' */
void WidgetSetValueDisplayConfig_OnSetUnitColorNegative( WidgetSetValueDisplayConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->UnitColorNegative, value ))
    return;

  _this->UnitColorNegative = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ValueDisplayConfig.OnSetUnitColorPositive()' */
void WidgetSetValueDisplayConfig_OnSetUnitColorPositive( WidgetSetValueDisplayConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->UnitColorPositive, value ))
    return;

  _this->UnitColorPositive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ValueDisplayConfig.OnSetUnitAlignment()' */
void WidgetSetValueDisplayConfig_OnSetUnitAlignment( WidgetSetValueDisplayConfig _this, 
  XSet value )
{
  if ( _this->UnitAlignment == value )
    return;

  _this->UnitAlignment = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ValueDisplayConfig.OnSetUnitFont()' */
void WidgetSetValueDisplayConfig_OnSetUnitFont( WidgetSetValueDisplayConfig _this, 
  ResourcesFont value )
{
  if ( _this->UnitFont == value )
    return;

  _this->UnitFont = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ValueDisplayConfig.OnSetFormatPlusSign()' */
void WidgetSetValueDisplayConfig_OnSetFormatPlusSign( WidgetSetValueDisplayConfig _this, 
  XString value )
{
  if ( !EwCompString( _this->FormatPlusSign, value ))
    return;

  _this->FormatPlusSign = EwShareString( value );
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ValueDisplayConfig.OnSetLayout()' */
void WidgetSetValueDisplayConfig_OnSetLayout( WidgetSetValueDisplayConfig _this, 
  XEnum value )
{
  if ( _this->Layout == value )
    return;

  _this->Layout = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ValueDisplayConfig.OnSetWidgetMinSize()' */
void WidgetSetValueDisplayConfig_OnSetWidgetMinSize( WidgetSetValueDisplayConfig _this, 
  XPoint value )
{
  if ( !EwCompPoint( _this->WidgetMinSize, value ))
    return;

  _this->WidgetMinSize = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* Variants derived from the class : 'WidgetSet::ValueDisplayConfig' */
EW_DEFINE_CLASS_VARIANTS( WidgetSetValueDisplayConfig )
EW_END_OF_CLASS_VARIANTS( WidgetSetValueDisplayConfig )

/* Virtual Method Table (VMT) for the class : 'WidgetSet::ValueDisplayConfig' */
EW_DEFINE_CLASS( WidgetSetValueDisplayConfig, WidgetSetWidgetConfig, ValueFont, 
                 FormatDigitGroupSign, FormatDigitGroupSign, FormatDigitGroupSign, 
                 FormatDigitGroupSign, ValueMarginBottom, "WidgetSet::ValueDisplayConfig" )
EW_END_OF_CLASS( WidgetSetValueDisplayConfig )

/* Initializer for the class 'WidgetSet::WidgetConfig' */
void WidgetSetWidgetConfig__Init( WidgetSetWidgetConfig _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  XObject__Init( &_this->_Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_GCT = EW_CLASS_GCT( WidgetSetWidgetConfig );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( WidgetSetWidgetConfig );
}

/* Re-Initializer for the class 'WidgetSet::WidgetConfig' */
void WidgetSetWidgetConfig__ReInit( WidgetSetWidgetConfig _this )
{
  /* At first re-initialize the super class ... */
  XObject__ReInit( &_this->_Super );
}

/* Finalizer method for the class 'WidgetSet::WidgetConfig' */
void WidgetSetWidgetConfig__Done( WidgetSetWidgetConfig _this )
{
  /* Finalize this class */
  _this->_Super._VMT = EW_CLASS( XObject );

  /* Don't forget to deinitialize the super class ... */
  XObject__Done( &_this->_Super );
}

/* 'C' function for method : 'WidgetSet::WidgetConfig.onInvalidate()' */
void WidgetSetWidgetConfig_onInvalidate( WidgetSetWidgetConfig _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  EwNotifyObjObservers((XObject)_this, 0 );
}

/* Variants derived from the class : 'WidgetSet::WidgetConfig' */
EW_DEFINE_CLASS_VARIANTS( WidgetSetWidgetConfig )
EW_END_OF_CLASS_VARIANTS( WidgetSetWidgetConfig )

/* Virtual Method Table (VMT) for the class : 'WidgetSet::WidgetConfig' */
EW_DEFINE_CLASS( WidgetSetWidgetConfig, XObject, _None, _None, _None, _None, _None, 
                 _None, "WidgetSet::WidgetConfig" )
EW_END_OF_CLASS( WidgetSetWidgetConfig )

/* Initializer for the class 'WidgetSet::ValueDisplay' */
void WidgetSetValueDisplay__Init( WidgetSetValueDisplay _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_GCT = EW_CLASS_GCT( WidgetSetValueDisplay );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( WidgetSetValueDisplay );

  /* ... and initialize objects, variables, properties, etc. */
  _this->Super3.viewState = CoreViewStateAlphaBlended | CoreViewStateEnabled | CoreViewStateTouchable 
  | CoreViewStateVisible;
  CoreRectView__OnSetBounds( _this, _Const0006 );
  _this->CurrentFactor = 1.000000f;
}

/* Re-Initializer for the class 'WidgetSet::ValueDisplay' */
void WidgetSetValueDisplay__ReInit( WidgetSetValueDisplay _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_Super );
}

/* Finalizer method for the class 'WidgetSet::ValueDisplay' */
void WidgetSetValueDisplay__Done( WidgetSetValueDisplay _this )
{
  /* Finalize this class */
  _this->_Super._VMT = EW_CLASS( CoreGroup );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_Super );
}

/* 'C' function for method : 'WidgetSet::ValueDisplay.OnSetBounds()' */
void WidgetSetValueDisplay_OnSetBounds( WidgetSetValueDisplay _this, XRect value )
{
  if ( _this->Appearance != 0 )
  {
    XPoint cs = EwGetRectSize( value );
    XPoint ns = cs;
    XPoint delta;

    if ( ns.X < _this->Appearance->WidgetMinSize.X )
      ns.X = _this->Appearance->WidgetMinSize.X;

    if ( ns.Y < _this->Appearance->WidgetMinSize.Y )
      ns.Y = _this->Appearance->WidgetMinSize.Y;

    if (( _this->Appearance->WidgetMaxSize.X > 0 ) && ( ns.X > _this->Appearance->WidgetMaxSize.X ))
      ns.X = _this->Appearance->WidgetMaxSize.X;

    if (( _this->Appearance->WidgetMaxSize.Y > 0 ) && ( ns.Y > _this->Appearance->WidgetMaxSize.Y ))
      ns.Y = _this->Appearance->WidgetMaxSize.Y;

    delta = EwMovePointNeg( ns, cs );

    if ( delta.X != 0 )
    {
      XBool alignToLeft = (( _this->Super3.Layout & CoreLayoutAlignToLeft ) == CoreLayoutAlignToLeft );
      XBool alignToRight = (( _this->Super3.Layout & CoreLayoutAlignToRight ) == 
        CoreLayoutAlignToRight );

      if ( alignToLeft && !alignToRight )
        value.Point2.X = ( value.Point2.X + delta.X );
      else
        if ( !alignToLeft && alignToRight )
          value.Point1.X = ( value.Point1.X - delta.X );
        else
        {
          value.Point1.X = ( value.Point1.X - ( delta.X / 2 ));
          value.Point2.X = ( value.Point1.X + ns.X );
        }
    }

    if ( delta.Y != 0 )
    {
      XBool alignToTop = (( _this->Super3.Layout & CoreLayoutAlignToTop ) == CoreLayoutAlignToTop );
      XBool alignToBottom = (( _this->Super3.Layout & CoreLayoutAlignToBottom ) 
        == CoreLayoutAlignToBottom );

      if ( alignToTop && !alignToBottom )
        value.Point2.Y = ( value.Point2.Y + delta.Y );
      else
        if ( !alignToTop && alignToBottom )
          value.Point1.Y = ( value.Point1.Y - delta.Y );
        else
        {
          value.Point1.Y = ( value.Point1.Y - ( delta.Y / 2 ));
          value.Point2.Y = ( value.Point1.Y + ns.Y );
        }
    }
  }

  CoreGroup_OnSetBounds((CoreGroup)_this, value );
}

/* The method UpdateViewState() is invoked automatically after the state of the 
   component has been changed. This method can be overridden and filled with logic 
   to ensure the visual aspect of the component does reflect its current state. 
   For example, the 'enabled' state of the component can affect its colors (disabled 
   components may appear pale). In this case the logic of the method should modify 
   the respective color properties accordingly to the current 'enabled' state. 
   The current state of the component is passed as a set in the parameter aState. 
   It reflects the very basic component state like its visibility or the ability 
   to react to user inputs. Beside this common state, the method can also involve 
   any other variables used in the component as long as they reflect its current 
   state. For example, the toggle switch component can take in account its toggle 
   state 'on' or 'off' and change accordingly the location of the slider, etc.
   Usually, this method will be invoked automatically by the framework. Optionally 
   you can request its invocation by using the method @InvalidateViewState(). */
void WidgetSetValueDisplay_UpdateViewState( WidgetSetValueDisplay _this, XSet aState )
{
  XBool needsValue;
  XBool needsUnit;
  XRect area;

  CoreGroup_UpdateViewState((CoreGroup)_this, aState );
  needsValue = (XBool)(( _this->Appearance != 0 ) && ( _this->Appearance->ValueFont 
  != 0 ));
  needsUnit = (XBool)(( _this->Appearance != 0 ) && ( _this->Appearance->UnitFont 
  != 0 ));
  area = EwGetRectORect( _this->Super2.Bounds );

  if ( needsValue && ( _this->textView1 == 0 ))
  {
    _this->textView1 = EwNewObject( ViewsText, 0 );
    CoreGroup_Add((CoreGroup)_this, ((CoreView)_this->textView1 ), 0 );
  }
  else
    if ( !needsValue && ( _this->textView1 != 0 ))
    {
      CoreGroup_Remove((CoreGroup)_this, ((CoreView)_this->textView1 ));
      _this->textView1 = 0;
    }

  if ( needsUnit && ( _this->textView2 == 0 ))
  {
    _this->textView2 = EwNewObject( ViewsText, 0 );
    CoreGroup_Add((CoreGroup)_this, ((CoreView)_this->textView2 ), 0 );
    ViewsText_OnSetEnableBidiText( _this->textView2, 1 );
  }
  else
    if ( !needsUnit && ( _this->textView2 != 0 ))
    {
      CoreGroup_Remove((CoreGroup)_this, ((CoreView)_this->textView2 ));
      _this->textView2 = 0;
    }

  if ( _this->textView1 != 0 )
  {
    XColor clr = _Const0007;
    XRect r = area;

    if ( _this->isNegative )
      clr = _this->Appearance->ValueColorNegative;
    else
      clr = _this->Appearance->ValueColorPositive;

    if (( _this->Appearance->Layout == WidgetSetValueDisplayLayoutAlignUnitLeftToValue ) 
        || ( _this->Appearance->Layout == WidgetSetValueDisplayLayoutAlignUnitRightToValue ))
      ViewsText_OnSetOnUpdate( _this->textView1, EwNewSlot( _this, WidgetSetValueDisplay_onLayoutViews ));
    else
      ViewsText_OnSetOnUpdate( _this->textView1, EwNullSlot );

    if ((( _this->textView2 != 0 ) && ( EwCompString( _this->Unit, 0 ) != 0 )) && 
        !EwIsRectEmpty( ViewsText_GetContentArea( _this->textView2 )))
    {
      if ( _this->Appearance->Layout == WidgetSetValueDisplayLayoutAlignValueLeftToUnit )
        r.Point2.X = ViewsText_GetContentArea( _this->textView2 ).Point1.X;

      if ( _this->Appearance->Layout == WidgetSetValueDisplayLayoutAlignValueRightToUnit )
        r.Point1.X = ViewsText_GetContentArea( _this->textView2 ).Point2.X;
    }

    CoreRectView__OnSetBounds( _this->textView1, EwNewRect( r.Point1.X + _this->Appearance->ValueMarginLeft, 
    r.Point1.Y + _this->Appearance->ValueMarginTop, r.Point2.X - _this->Appearance->ValueMarginRight, 
    r.Point2.Y - _this->Appearance->ValueMarginBottom ));
    ViewsText_OnSetFont( _this->textView1, _this->Appearance->ValueFont );
    ViewsText_OnSetAlignment( _this->textView1, _this->Appearance->ValueAlignment );
    ViewsText_OnSetString( _this->textView1, _this->valueString );
    ViewsText_OnSetColor( _this->textView1, clr );
  }

  if ( _this->textView2 != 0 )
  {
    XColor clr = _Const0007;
    XRect r = area;

    if ( _this->isNegative )
      clr = _this->Appearance->UnitColorNegative;
    else
      clr = _this->Appearance->UnitColorPositive;

    if (( _this->Appearance->Layout == WidgetSetValueDisplayLayoutAlignValueLeftToUnit ) 
        || ( _this->Appearance->Layout == WidgetSetValueDisplayLayoutAlignValueRightToUnit ))
      ViewsText_OnSetOnUpdate( _this->textView2, EwNewSlot( _this, WidgetSetValueDisplay_onLayoutViews ));
    else
      ViewsText_OnSetOnUpdate( _this->textView2, EwNullSlot );

    if (( _this->textView1 != 0 ) && ( EwCompString( _this->valueString, 0 ) != 
        0 ))
    {
      if ( _this->Appearance->Layout == WidgetSetValueDisplayLayoutAlignUnitLeftToValue )
        r.Point2.X = ViewsText_GetContentArea( _this->textView1 ).Point1.X;

      if ( _this->Appearance->Layout == WidgetSetValueDisplayLayoutAlignUnitRightToValue )
        r.Point1.X = ViewsText_GetContentArea( _this->textView1 ).Point2.X;
    }

    CoreRectView__OnSetBounds( _this->textView2, EwNewRect( r.Point1.X + _this->Appearance->UnitMarginLeft, 
    r.Point1.Y + _this->Appearance->UnitMarginTop, r.Point2.X - _this->Appearance->UnitMarginRight, 
    r.Point2.Y - _this->Appearance->UnitMarginBottom ));
    ViewsText_OnSetFont( _this->textView2, _this->Appearance->UnitFont );
    ViewsText_OnSetAlignment( _this->textView2, _this->Appearance->UnitAlignment );
    ViewsText_OnSetString( _this->textView2, _this->Unit );
    ViewsText_OnSetColor( _this->textView2, clr );
  }
}

/* 'C' function for method : 'WidgetSet::ValueDisplay.onLayoutViews()' */
void WidgetSetValueDisplay_onLayoutViews( WidgetSetValueDisplay _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if (( _this->Appearance != 0 ) && ( _this->Appearance->Layout != WidgetSetValueDisplayLayoutUnitAndValueAreIndependent ))
    CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'WidgetSet::ValueDisplay.onFormatValue()' */
void WidgetSetValueDisplay_onFormatValue( WidgetSetValueDisplay _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->Appearance != 0 )
  {
    XFloat theValue = ((XFloat)_this->CurrentValue * _this->CurrentFactor ) + _this->CurrentBias;
    XInt32 noOfDigits = _this->NoOfDigits;
    XString newValueString;
    XInt32 inx;

    if ( _this->Precision > 0 )
      noOfDigits = noOfDigits + 1;

    if ( theValue < 0.000000f )
      noOfDigits = noOfDigits + 1;

    newValueString = EwNewStringFloat( theValue, noOfDigits, _this->Precision );
    inx = EwStringFindChar( newValueString, '.', 0 );

    if (( inx >= 0 ) && ( EwCompString( _this->Appearance->FormatDecimalSign, EwLoadString( 
        &_Const0004 )) != 0 ))
      newValueString = EwConcatString( EwConcatString( EwStringLeft( newValueString, 
      inx ), _this->Appearance->FormatDecimalSign ), EwStringRemove( newValueString, 
      0, inx + 1 ));

    if ( theValue < 0.000000f )
    {
      newValueString = EwStringRemove( newValueString, 0, 1 );
      inx = inx - 1;
    }

    if ( EwCompString( _this->Appearance->FormatDigitGroupSign, 0 ) != 0 )
    {
      if ( inx < 0 )
        inx = EwGetStringLength( newValueString );

      for ( ; inx > 3; inx = inx - 3 )
        newValueString = EwConcatString( EwConcatString( EwStringLeft( newValueString, 
        inx - 3 ), _this->Appearance->FormatDigitGroupSign ), EwStringRemove( newValueString, 
        0, inx - 3 ));
    }

    if ( theValue >= 0.000000f )
      newValueString = EwConcatString( _this->Appearance->FormatPlusSign, newValueString );
    else
      newValueString = EwConcatString( _this->Appearance->FormatMinusSign, newValueString );

    if ( EwCompString( newValueString, _this->valueString ) != 0 )
    {
      _this->valueString = EwShareString( newValueString );
      _this->isNegative = (XBool)( theValue < 0.000000f );
      CoreGroup_InvalidateViewState((CoreGroup)_this );
    }
  }
  else
    if ( EwCompString( _this->valueString, 0 ) != 0 )
    {
      _this->valueString = 0;
      CoreGroup_InvalidateViewState((CoreGroup)_this );
    }
}

/* 'C' function for method : 'WidgetSet::ValueDisplay.onConfigChanged()' */
void WidgetSetValueDisplay_onConfigChanged( WidgetSetValueDisplay _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->Appearance != 0 )
    CoreRectView__OnSetBounds( _this, _this->Super2.Bounds );

  EwPostSignal( EwNewSlot( _this, WidgetSetValueDisplay_onFormatValue ), ((XObject)_this ));
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'WidgetSet::ValueDisplay.OnSetUnit()' */
void WidgetSetValueDisplay_OnSetUnit( WidgetSetValueDisplay _this, XString value )
{
  if ( !EwCompString( _this->Unit, value ))
    return;

  _this->Unit = EwShareString( value );
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'WidgetSet::ValueDisplay.OnSetPrecision()' */
void WidgetSetValueDisplay_OnSetPrecision( WidgetSetValueDisplay _this, XInt32 value )
{
  if ( _this->Precision == value )
    return;

  _this->Precision = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetValueDisplay_onFormatValue ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ValueDisplay.OnSetCurrentValue()' */
void WidgetSetValueDisplay_OnSetCurrentValue( WidgetSetValueDisplay _this, XInt32 
  value )
{
  if ( _this->CurrentValue == value )
    return;

  _this->CurrentValue = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetValueDisplay_onFormatValue ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ValueDisplay.OnSetAppearance()' */
void WidgetSetValueDisplay_OnSetAppearance( WidgetSetValueDisplay _this, WidgetSetValueDisplayConfig 
  value )
{
  if ( _this->Appearance == value )
    return;

  if ( _this->Appearance != 0 )
    EwDetachObjObserver( EwNewSlot( _this, WidgetSetValueDisplay_onConfigChanged ), 
      (XObject)_this->Appearance, 0 );

  _this->Appearance = value;

  if ( value != 0 )
    EwAttachObjObserver( EwNewSlot( _this, WidgetSetValueDisplay_onConfigChanged ), 
      (XObject)value, 0 );

  EwPostSignal( EwNewSlot( _this, WidgetSetValueDisplay_onConfigChanged ), ((XObject)_this ));
}

/* Variants derived from the class : 'WidgetSet::ValueDisplay' */
EW_DEFINE_CLASS_VARIANTS( WidgetSetValueDisplay )
EW_END_OF_CLASS_VARIANTS( WidgetSetValueDisplay )

/* Virtual Method Table (VMT) for the class : 'WidgetSet::ValueDisplay' */
EW_DEFINE_CLASS( WidgetSetValueDisplay, CoreGroup, textView2, valueString, valueString, 
                 valueString, valueString, Precision, "WidgetSet::ValueDisplay" )
  CoreRectView_initLayoutContext,
  CoreGroup_Draw,
  CoreGroup_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  WidgetSetValueDisplay_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  WidgetSetValueDisplay_UpdateViewState,
  CoreGroup_InvalidateArea,
EW_END_OF_CLASS( WidgetSetValueDisplay )

/* Embedded Wizard */
