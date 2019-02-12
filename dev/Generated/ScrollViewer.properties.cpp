// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

// DO NOT EDIT! This file was generated by CustomTasks.DependencyPropertyCodeGen
#include "pch.h"
#include "common.h"
#include "ScrollViewer.h"

CppWinRTActivatableClassWithDPFactory(ScrollViewer)

GlobalDependencyProperty ScrollViewerProperties::s_ComputedHorizontalScrollBarVisibilityProperty{ nullptr };
GlobalDependencyProperty ScrollViewerProperties::s_ComputedVerticalScrollBarVisibilityProperty{ nullptr };
GlobalDependencyProperty ScrollViewerProperties::s_ContentProperty{ nullptr };
GlobalDependencyProperty ScrollViewerProperties::s_ContentOrientationProperty{ nullptr };
GlobalDependencyProperty ScrollViewerProperties::s_HorizontalAnchorRatioProperty{ nullptr };
GlobalDependencyProperty ScrollViewerProperties::s_HorizontalScrollBarVisibilityProperty{ nullptr };
GlobalDependencyProperty ScrollViewerProperties::s_HorizontalScrollChainingModeProperty{ nullptr };
GlobalDependencyProperty ScrollViewerProperties::s_HorizontalScrollControllerProperty{ nullptr };
GlobalDependencyProperty ScrollViewerProperties::s_HorizontalScrollModeProperty{ nullptr };
GlobalDependencyProperty ScrollViewerProperties::s_HorizontalScrollRailingModeProperty{ nullptr };
GlobalDependencyProperty ScrollViewerProperties::s_InputKindProperty{ nullptr };
GlobalDependencyProperty ScrollViewerProperties::s_IsAnchoredAtHorizontalExtentProperty{ nullptr };
GlobalDependencyProperty ScrollViewerProperties::s_IsAnchoredAtVerticalExtentProperty{ nullptr };
GlobalDependencyProperty ScrollViewerProperties::s_MaxZoomFactorProperty{ nullptr };
GlobalDependencyProperty ScrollViewerProperties::s_MinZoomFactorProperty{ nullptr };
GlobalDependencyProperty ScrollViewerProperties::s_ScrollerProperty{ nullptr };
GlobalDependencyProperty ScrollViewerProperties::s_VerticalAnchorRatioProperty{ nullptr };
GlobalDependencyProperty ScrollViewerProperties::s_VerticalScrollBarVisibilityProperty{ nullptr };
GlobalDependencyProperty ScrollViewerProperties::s_VerticalScrollChainingModeProperty{ nullptr };
GlobalDependencyProperty ScrollViewerProperties::s_VerticalScrollControllerProperty{ nullptr };
GlobalDependencyProperty ScrollViewerProperties::s_VerticalScrollModeProperty{ nullptr };
GlobalDependencyProperty ScrollViewerProperties::s_VerticalScrollRailingModeProperty{ nullptr };
GlobalDependencyProperty ScrollViewerProperties::s_ZoomChainingModeProperty{ nullptr };
GlobalDependencyProperty ScrollViewerProperties::s_ZoomModeProperty{ nullptr };

ScrollViewerProperties::ScrollViewerProperties()
    : m_anchorRequestedEventSource{static_cast<ScrollViewer*>(this)}
    , m_bringingIntoViewEventSource{static_cast<ScrollViewer*>(this)}
    , m_changingOffsetsEventSource{static_cast<ScrollViewer*>(this)}
    , m_changingZoomFactorEventSource{static_cast<ScrollViewer*>(this)}
    , m_extentChangedEventSource{static_cast<ScrollViewer*>(this)}
    , m_stateChangedEventSource{static_cast<ScrollViewer*>(this)}
    , m_viewChangeCompletedEventSource{static_cast<ScrollViewer*>(this)}
    , m_viewChangedEventSource{static_cast<ScrollViewer*>(this)}
{
    EnsureProperties();
}

void ScrollViewerProperties::EnsureProperties()
{
    if (!s_ComputedHorizontalScrollBarVisibilityProperty)
    {
        s_ComputedHorizontalScrollBarVisibilityProperty =
            InitializeDependencyProperty(
                L"ComputedHorizontalScrollBarVisibility",
                winrt::name_of<winrt::Visibility>(),
                winrt::name_of<winrt::ScrollViewer>(),
                false /* isAttached */,
                ValueHelper<winrt::Visibility>::BoxValueIfNecessary(ScrollViewer::s_defaultComputedHorizontalScrollBarVisibility),
                winrt::PropertyChangedCallback(&OnPropertyChanged));
    }
    if (!s_ComputedVerticalScrollBarVisibilityProperty)
    {
        s_ComputedVerticalScrollBarVisibilityProperty =
            InitializeDependencyProperty(
                L"ComputedVerticalScrollBarVisibility",
                winrt::name_of<winrt::Visibility>(),
                winrt::name_of<winrt::ScrollViewer>(),
                false /* isAttached */,
                ValueHelper<winrt::Visibility>::BoxValueIfNecessary(ScrollViewer::s_defaultComputedVerticalScrollBarVisibility),
                winrt::PropertyChangedCallback(&OnPropertyChanged));
    }
    if (!s_ContentProperty)
    {
        s_ContentProperty =
            InitializeDependencyProperty(
                L"Content",
                winrt::name_of<winrt::UIElement>(),
                winrt::name_of<winrt::ScrollViewer>(),
                false /* isAttached */,
                ValueHelper<winrt::UIElement>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnPropertyChanged));
    }
    if (!s_ContentOrientationProperty)
    {
        s_ContentOrientationProperty =
            InitializeDependencyProperty(
                L"ContentOrientation",
                winrt::name_of<winrt::ContentOrientation>(),
                winrt::name_of<winrt::ScrollViewer>(),
                false /* isAttached */,
                ValueHelper<winrt::ContentOrientation>::BoxValueIfNecessary(ScrollViewer::s_defaultContentOrientation),
                winrt::PropertyChangedCallback(&OnPropertyChanged));
    }
    if (!s_HorizontalAnchorRatioProperty)
    {
        s_HorizontalAnchorRatioProperty =
            InitializeDependencyProperty(
                L"HorizontalAnchorRatio",
                winrt::name_of<double>(),
                winrt::name_of<winrt::ScrollViewer>(),
                false /* isAttached */,
                ValueHelper<double>::BoxValueIfNecessary(ScrollViewer::s_defaultAnchorRatio),
                &OnPropertyChanged_ValidateAnchorRatio);
    }
    if (!s_HorizontalScrollBarVisibilityProperty)
    {
        s_HorizontalScrollBarVisibilityProperty =
            InitializeDependencyProperty(
                L"HorizontalScrollBarVisibility",
                winrt::name_of<winrt::ScrollBarVisibility>(),
                winrt::name_of<winrt::ScrollViewer>(),
                false /* isAttached */,
                ValueHelper<winrt::ScrollBarVisibility>::BoxValueIfNecessary(ScrollViewer::s_defaultHorizontalScrollBarVisibility),
                winrt::PropertyChangedCallback(&OnPropertyChanged));
    }
    if (!s_HorizontalScrollChainingModeProperty)
    {
        s_HorizontalScrollChainingModeProperty =
            InitializeDependencyProperty(
                L"HorizontalScrollChainingMode",
                winrt::name_of<winrt::ChainingMode>(),
                winrt::name_of<winrt::ScrollViewer>(),
                false /* isAttached */,
                ValueHelper<winrt::ChainingMode>::BoxValueIfNecessary(ScrollViewer::s_defaultHorizontalScrollChainingMode),
                winrt::PropertyChangedCallback(&OnPropertyChanged));
    }
    if (!s_HorizontalScrollControllerProperty)
    {
        s_HorizontalScrollControllerProperty =
            InitializeDependencyProperty(
                L"HorizontalScrollController",
                winrt::name_of<winrt::IScrollController>(),
                winrt::name_of<winrt::ScrollViewer>(),
                false /* isAttached */,
                ValueHelper<winrt::IScrollController>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnPropertyChanged));
    }
    if (!s_HorizontalScrollModeProperty)
    {
        s_HorizontalScrollModeProperty =
            InitializeDependencyProperty(
                L"HorizontalScrollMode",
                winrt::name_of<winrt::ScrollMode>(),
                winrt::name_of<winrt::ScrollViewer>(),
                false /* isAttached */,
                ValueHelper<winrt::ScrollMode>::BoxValueIfNecessary(ScrollViewer::s_defaultHorizontalScrollMode),
                winrt::PropertyChangedCallback(&OnPropertyChanged));
    }
    if (!s_HorizontalScrollRailingModeProperty)
    {
        s_HorizontalScrollRailingModeProperty =
            InitializeDependencyProperty(
                L"HorizontalScrollRailingMode",
                winrt::name_of<winrt::RailingMode>(),
                winrt::name_of<winrt::ScrollViewer>(),
                false /* isAttached */,
                ValueHelper<winrt::RailingMode>::BoxValueIfNecessary(ScrollViewer::s_defaultHorizontalScrollRailingMode),
                winrt::PropertyChangedCallback(&OnPropertyChanged));
    }
    if (!s_InputKindProperty)
    {
        s_InputKindProperty =
            InitializeDependencyProperty(
                L"InputKind",
                winrt::name_of<winrt::InputKind>(),
                winrt::name_of<winrt::ScrollViewer>(),
                false /* isAttached */,
                ValueHelper<winrt::InputKind>::BoxValueIfNecessary(ScrollViewer::s_defaultInputKind),
                winrt::PropertyChangedCallback(&OnPropertyChanged));
    }
    if (!s_IsAnchoredAtHorizontalExtentProperty)
    {
        s_IsAnchoredAtHorizontalExtentProperty =
            InitializeDependencyProperty(
                L"IsAnchoredAtHorizontalExtent",
                winrt::name_of<bool>(),
                winrt::name_of<winrt::ScrollViewer>(),
                false /* isAttached */,
                ValueHelper<bool>::BoxValueIfNecessary(ScrollViewer::s_defaultAnchorAtExtent),
                winrt::PropertyChangedCallback(&OnPropertyChanged));
    }
    if (!s_IsAnchoredAtVerticalExtentProperty)
    {
        s_IsAnchoredAtVerticalExtentProperty =
            InitializeDependencyProperty(
                L"IsAnchoredAtVerticalExtent",
                winrt::name_of<bool>(),
                winrt::name_of<winrt::ScrollViewer>(),
                false /* isAttached */,
                ValueHelper<bool>::BoxValueIfNecessary(ScrollViewer::s_defaultAnchorAtExtent),
                winrt::PropertyChangedCallback(&OnPropertyChanged));
    }
    if (!s_MaxZoomFactorProperty)
    {
        s_MaxZoomFactorProperty =
            InitializeDependencyProperty(
                L"MaxZoomFactor",
                winrt::name_of<double>(),
                winrt::name_of<winrt::ScrollViewer>(),
                false /* isAttached */,
                ValueHelper<double>::BoxValueIfNecessary(ScrollViewer::s_defaultMaxZoomFactor),
                &OnPropertyChanged_ValidateZoomFactoryBoundary);
    }
    if (!s_MinZoomFactorProperty)
    {
        s_MinZoomFactorProperty =
            InitializeDependencyProperty(
                L"MinZoomFactor",
                winrt::name_of<double>(),
                winrt::name_of<winrt::ScrollViewer>(),
                false /* isAttached */,
                ValueHelper<double>::BoxValueIfNecessary(ScrollViewer::s_defaultMinZoomFactor),
                &OnPropertyChanged_ValidateZoomFactoryBoundary);
    }
    if (!s_ScrollerProperty)
    {
        s_ScrollerProperty =
            InitializeDependencyProperty(
                L"Scroller",
                winrt::name_of<winrt::Scroller>(),
                winrt::name_of<winrt::ScrollViewer>(),
                true /* isAttached */,
                ValueHelper<winrt::Scroller>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnPropertyChanged));
    }
    if (!s_VerticalAnchorRatioProperty)
    {
        s_VerticalAnchorRatioProperty =
            InitializeDependencyProperty(
                L"VerticalAnchorRatio",
                winrt::name_of<double>(),
                winrt::name_of<winrt::ScrollViewer>(),
                false /* isAttached */,
                ValueHelper<double>::BoxValueIfNecessary(ScrollViewer::s_defaultAnchorRatio),
                &OnPropertyChanged_ValidateAnchorRatio);
    }
    if (!s_VerticalScrollBarVisibilityProperty)
    {
        s_VerticalScrollBarVisibilityProperty =
            InitializeDependencyProperty(
                L"VerticalScrollBarVisibility",
                winrt::name_of<winrt::ScrollBarVisibility>(),
                winrt::name_of<winrt::ScrollViewer>(),
                false /* isAttached */,
                ValueHelper<winrt::ScrollBarVisibility>::BoxValueIfNecessary(ScrollViewer::s_defaultVerticalScrollBarVisibility),
                winrt::PropertyChangedCallback(&OnPropertyChanged));
    }
    if (!s_VerticalScrollChainingModeProperty)
    {
        s_VerticalScrollChainingModeProperty =
            InitializeDependencyProperty(
                L"VerticalScrollChainingMode",
                winrt::name_of<winrt::ChainingMode>(),
                winrt::name_of<winrt::ScrollViewer>(),
                false /* isAttached */,
                ValueHelper<winrt::ChainingMode>::BoxValueIfNecessary(ScrollViewer::s_defaultVerticalScrollChainingMode),
                winrt::PropertyChangedCallback(&OnPropertyChanged));
    }
    if (!s_VerticalScrollControllerProperty)
    {
        s_VerticalScrollControllerProperty =
            InitializeDependencyProperty(
                L"VerticalScrollController",
                winrt::name_of<winrt::IScrollController>(),
                winrt::name_of<winrt::ScrollViewer>(),
                false /* isAttached */,
                ValueHelper<winrt::IScrollController>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnPropertyChanged));
    }
    if (!s_VerticalScrollModeProperty)
    {
        s_VerticalScrollModeProperty =
            InitializeDependencyProperty(
                L"VerticalScrollMode",
                winrt::name_of<winrt::ScrollMode>(),
                winrt::name_of<winrt::ScrollViewer>(),
                false /* isAttached */,
                ValueHelper<winrt::ScrollMode>::BoxValueIfNecessary(ScrollViewer::s_defaultVerticalScrollMode),
                winrt::PropertyChangedCallback(&OnPropertyChanged));
    }
    if (!s_VerticalScrollRailingModeProperty)
    {
        s_VerticalScrollRailingModeProperty =
            InitializeDependencyProperty(
                L"VerticalScrollRailingMode",
                winrt::name_of<winrt::RailingMode>(),
                winrt::name_of<winrt::ScrollViewer>(),
                false /* isAttached */,
                ValueHelper<winrt::RailingMode>::BoxValueIfNecessary(ScrollViewer::s_defaultVerticalScrollRailingMode),
                winrt::PropertyChangedCallback(&OnPropertyChanged));
    }
    if (!s_ZoomChainingModeProperty)
    {
        s_ZoomChainingModeProperty =
            InitializeDependencyProperty(
                L"ZoomChainingMode",
                winrt::name_of<winrt::ChainingMode>(),
                winrt::name_of<winrt::ScrollViewer>(),
                false /* isAttached */,
                ValueHelper<winrt::ChainingMode>::BoxValueIfNecessary(ScrollViewer::s_defaultZoomChainingMode),
                winrt::PropertyChangedCallback(&OnPropertyChanged));
    }
    if (!s_ZoomModeProperty)
    {
        s_ZoomModeProperty =
            InitializeDependencyProperty(
                L"ZoomMode",
                winrt::name_of<winrt::ZoomMode>(),
                winrt::name_of<winrt::ScrollViewer>(),
                false /* isAttached */,
                ValueHelper<winrt::ZoomMode>::BoxValueIfNecessary(ScrollViewer::s_defaultZoomMode),
                winrt::PropertyChangedCallback(&OnPropertyChanged));
    }
}

void ScrollViewerProperties::ClearProperties()
{
    s_ComputedHorizontalScrollBarVisibilityProperty = nullptr;
    s_ComputedVerticalScrollBarVisibilityProperty = nullptr;
    s_ContentProperty = nullptr;
    s_ContentOrientationProperty = nullptr;
    s_HorizontalAnchorRatioProperty = nullptr;
    s_HorizontalScrollBarVisibilityProperty = nullptr;
    s_HorizontalScrollChainingModeProperty = nullptr;
    s_HorizontalScrollControllerProperty = nullptr;
    s_HorizontalScrollModeProperty = nullptr;
    s_HorizontalScrollRailingModeProperty = nullptr;
    s_InputKindProperty = nullptr;
    s_IsAnchoredAtHorizontalExtentProperty = nullptr;
    s_IsAnchoredAtVerticalExtentProperty = nullptr;
    s_MaxZoomFactorProperty = nullptr;
    s_MinZoomFactorProperty = nullptr;
    s_ScrollerProperty = nullptr;
    s_VerticalAnchorRatioProperty = nullptr;
    s_VerticalScrollBarVisibilityProperty = nullptr;
    s_VerticalScrollChainingModeProperty = nullptr;
    s_VerticalScrollControllerProperty = nullptr;
    s_VerticalScrollModeProperty = nullptr;
    s_VerticalScrollRailingModeProperty = nullptr;
    s_ZoomChainingModeProperty = nullptr;
    s_ZoomModeProperty = nullptr;
}

void ScrollViewerProperties::OnPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ScrollViewer>();
    winrt::get_self<ScrollViewer>(owner)->OnPropertyChanged(args);
}
void ScrollViewerProperties::OnPropertyChanged_ValidateAnchorRatio(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ScrollViewer>();

    auto value = winrt::unbox_value<double>(args.NewValue());
    auto coercedValue = value;
    winrt::get_self<ScrollViewer>(owner)->ValidateAnchorRatio(coercedValue);
    if (std::memcmp(&value, &coercedValue, sizeof(value)) != 0) // use memcmp to avoid tripping over nan
    {
        sender.SetValue(args.Property(), winrt::box_value<double>(coercedValue));
        return;
    }

    winrt::get_self<ScrollViewer>(owner)->OnPropertyChanged(args);
}
void ScrollViewerProperties::OnPropertyChanged_ValidateZoomFactoryBoundary(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ScrollViewer>();

    auto value = winrt::unbox_value<double>(args.NewValue());
    auto coercedValue = value;
    winrt::get_self<ScrollViewer>(owner)->ValidateZoomFactoryBoundary(coercedValue);
    if (std::memcmp(&value, &coercedValue, sizeof(value)) != 0) // use memcmp to avoid tripping over nan
    {
        sender.SetValue(args.Property(), winrt::box_value<double>(coercedValue));
        return;
    }

    winrt::get_self<ScrollViewer>(owner)->OnPropertyChanged(args);
}

void ScrollViewerProperties::ComputedHorizontalScrollBarVisibility(winrt::Visibility const& value)
{
    static_cast<ScrollViewer*>(this)->SetValue(s_ComputedHorizontalScrollBarVisibilityProperty, ValueHelper<winrt::Visibility>::BoxValueIfNecessary(value));
}

winrt::Visibility ScrollViewerProperties::ComputedHorizontalScrollBarVisibility()
{
    return ValueHelper<winrt::Visibility>::CastOrUnbox(static_cast<ScrollViewer*>(this)->GetValue(s_ComputedHorizontalScrollBarVisibilityProperty));
}

void ScrollViewerProperties::ComputedVerticalScrollBarVisibility(winrt::Visibility const& value)
{
    static_cast<ScrollViewer*>(this)->SetValue(s_ComputedVerticalScrollBarVisibilityProperty, ValueHelper<winrt::Visibility>::BoxValueIfNecessary(value));
}

winrt::Visibility ScrollViewerProperties::ComputedVerticalScrollBarVisibility()
{
    return ValueHelper<winrt::Visibility>::CastOrUnbox(static_cast<ScrollViewer*>(this)->GetValue(s_ComputedVerticalScrollBarVisibilityProperty));
}

void ScrollViewerProperties::Content(winrt::UIElement const& value)
{
    static_cast<ScrollViewer*>(this)->SetValue(s_ContentProperty, ValueHelper<winrt::UIElement>::BoxValueIfNecessary(value));
}

winrt::UIElement ScrollViewerProperties::Content()
{
    return ValueHelper<winrt::UIElement>::CastOrUnbox(static_cast<ScrollViewer*>(this)->GetValue(s_ContentProperty));
}

void ScrollViewerProperties::ContentOrientation(winrt::ContentOrientation const& value)
{
    static_cast<ScrollViewer*>(this)->SetValue(s_ContentOrientationProperty, ValueHelper<winrt::ContentOrientation>::BoxValueIfNecessary(value));
}

winrt::ContentOrientation ScrollViewerProperties::ContentOrientation()
{
    return ValueHelper<winrt::ContentOrientation>::CastOrUnbox(static_cast<ScrollViewer*>(this)->GetValue(s_ContentOrientationProperty));
}

void ScrollViewerProperties::HorizontalAnchorRatio(double value)
{
    static_cast<ScrollViewer*>(this)->ValidateAnchorRatio(value);
    static_cast<ScrollViewer*>(this)->SetValue(s_HorizontalAnchorRatioProperty, ValueHelper<double>::BoxValueIfNecessary(value));
}

double ScrollViewerProperties::HorizontalAnchorRatio()
{
    return ValueHelper<double>::CastOrUnbox(static_cast<ScrollViewer*>(this)->GetValue(s_HorizontalAnchorRatioProperty));
}

void ScrollViewerProperties::HorizontalScrollBarVisibility(winrt::ScrollBarVisibility const& value)
{
    static_cast<ScrollViewer*>(this)->SetValue(s_HorizontalScrollBarVisibilityProperty, ValueHelper<winrt::ScrollBarVisibility>::BoxValueIfNecessary(value));
}

winrt::ScrollBarVisibility ScrollViewerProperties::HorizontalScrollBarVisibility()
{
    return ValueHelper<winrt::ScrollBarVisibility>::CastOrUnbox(static_cast<ScrollViewer*>(this)->GetValue(s_HorizontalScrollBarVisibilityProperty));
}

void ScrollViewerProperties::HorizontalScrollChainingMode(winrt::ChainingMode const& value)
{
    static_cast<ScrollViewer*>(this)->SetValue(s_HorizontalScrollChainingModeProperty, ValueHelper<winrt::ChainingMode>::BoxValueIfNecessary(value));
}

winrt::ChainingMode ScrollViewerProperties::HorizontalScrollChainingMode()
{
    return ValueHelper<winrt::ChainingMode>::CastOrUnbox(static_cast<ScrollViewer*>(this)->GetValue(s_HorizontalScrollChainingModeProperty));
}

void ScrollViewerProperties::HorizontalScrollController(winrt::IScrollController const& value)
{
    static_cast<ScrollViewer*>(this)->SetValue(s_HorizontalScrollControllerProperty, ValueHelper<winrt::IScrollController>::BoxValueIfNecessary(value));
}

winrt::IScrollController ScrollViewerProperties::HorizontalScrollController()
{
    return ValueHelper<winrt::IScrollController>::CastOrUnbox(static_cast<ScrollViewer*>(this)->GetValue(s_HorizontalScrollControllerProperty));
}

void ScrollViewerProperties::HorizontalScrollMode(winrt::ScrollMode const& value)
{
    static_cast<ScrollViewer*>(this)->SetValue(s_HorizontalScrollModeProperty, ValueHelper<winrt::ScrollMode>::BoxValueIfNecessary(value));
}

winrt::ScrollMode ScrollViewerProperties::HorizontalScrollMode()
{
    return ValueHelper<winrt::ScrollMode>::CastOrUnbox(static_cast<ScrollViewer*>(this)->GetValue(s_HorizontalScrollModeProperty));
}

void ScrollViewerProperties::HorizontalScrollRailingMode(winrt::RailingMode const& value)
{
    static_cast<ScrollViewer*>(this)->SetValue(s_HorizontalScrollRailingModeProperty, ValueHelper<winrt::RailingMode>::BoxValueIfNecessary(value));
}

winrt::RailingMode ScrollViewerProperties::HorizontalScrollRailingMode()
{
    return ValueHelper<winrt::RailingMode>::CastOrUnbox(static_cast<ScrollViewer*>(this)->GetValue(s_HorizontalScrollRailingModeProperty));
}

void ScrollViewerProperties::InputKind(winrt::InputKind const& value)
{
    static_cast<ScrollViewer*>(this)->SetValue(s_InputKindProperty, ValueHelper<winrt::InputKind>::BoxValueIfNecessary(value));
}

winrt::InputKind ScrollViewerProperties::InputKind()
{
    return ValueHelper<winrt::InputKind>::CastOrUnbox(static_cast<ScrollViewer*>(this)->GetValue(s_InputKindProperty));
}

void ScrollViewerProperties::IsAnchoredAtHorizontalExtent(bool value)
{
    static_cast<ScrollViewer*>(this)->SetValue(s_IsAnchoredAtHorizontalExtentProperty, ValueHelper<bool>::BoxValueIfNecessary(value));
}

bool ScrollViewerProperties::IsAnchoredAtHorizontalExtent()
{
    return ValueHelper<bool>::CastOrUnbox(static_cast<ScrollViewer*>(this)->GetValue(s_IsAnchoredAtHorizontalExtentProperty));
}

void ScrollViewerProperties::IsAnchoredAtVerticalExtent(bool value)
{
    static_cast<ScrollViewer*>(this)->SetValue(s_IsAnchoredAtVerticalExtentProperty, ValueHelper<bool>::BoxValueIfNecessary(value));
}

bool ScrollViewerProperties::IsAnchoredAtVerticalExtent()
{
    return ValueHelper<bool>::CastOrUnbox(static_cast<ScrollViewer*>(this)->GetValue(s_IsAnchoredAtVerticalExtentProperty));
}

void ScrollViewerProperties::MaxZoomFactor(double value)
{
    static_cast<ScrollViewer*>(this)->ValidateZoomFactoryBoundary(value);
    static_cast<ScrollViewer*>(this)->SetValue(s_MaxZoomFactorProperty, ValueHelper<double>::BoxValueIfNecessary(value));
}

double ScrollViewerProperties::MaxZoomFactor()
{
    return ValueHelper<double>::CastOrUnbox(static_cast<ScrollViewer*>(this)->GetValue(s_MaxZoomFactorProperty));
}

void ScrollViewerProperties::MinZoomFactor(double value)
{
    static_cast<ScrollViewer*>(this)->ValidateZoomFactoryBoundary(value);
    static_cast<ScrollViewer*>(this)->SetValue(s_MinZoomFactorProperty, ValueHelper<double>::BoxValueIfNecessary(value));
}

double ScrollViewerProperties::MinZoomFactor()
{
    return ValueHelper<double>::CastOrUnbox(static_cast<ScrollViewer*>(this)->GetValue(s_MinZoomFactorProperty));
}

void ScrollViewerProperties::VerticalAnchorRatio(double value)
{
    static_cast<ScrollViewer*>(this)->ValidateAnchorRatio(value);
    static_cast<ScrollViewer*>(this)->SetValue(s_VerticalAnchorRatioProperty, ValueHelper<double>::BoxValueIfNecessary(value));
}

double ScrollViewerProperties::VerticalAnchorRatio()
{
    return ValueHelper<double>::CastOrUnbox(static_cast<ScrollViewer*>(this)->GetValue(s_VerticalAnchorRatioProperty));
}

void ScrollViewerProperties::VerticalScrollBarVisibility(winrt::ScrollBarVisibility const& value)
{
    static_cast<ScrollViewer*>(this)->SetValue(s_VerticalScrollBarVisibilityProperty, ValueHelper<winrt::ScrollBarVisibility>::BoxValueIfNecessary(value));
}

winrt::ScrollBarVisibility ScrollViewerProperties::VerticalScrollBarVisibility()
{
    return ValueHelper<winrt::ScrollBarVisibility>::CastOrUnbox(static_cast<ScrollViewer*>(this)->GetValue(s_VerticalScrollBarVisibilityProperty));
}

void ScrollViewerProperties::VerticalScrollChainingMode(winrt::ChainingMode const& value)
{
    static_cast<ScrollViewer*>(this)->SetValue(s_VerticalScrollChainingModeProperty, ValueHelper<winrt::ChainingMode>::BoxValueIfNecessary(value));
}

winrt::ChainingMode ScrollViewerProperties::VerticalScrollChainingMode()
{
    return ValueHelper<winrt::ChainingMode>::CastOrUnbox(static_cast<ScrollViewer*>(this)->GetValue(s_VerticalScrollChainingModeProperty));
}

void ScrollViewerProperties::VerticalScrollController(winrt::IScrollController const& value)
{
    static_cast<ScrollViewer*>(this)->SetValue(s_VerticalScrollControllerProperty, ValueHelper<winrt::IScrollController>::BoxValueIfNecessary(value));
}

winrt::IScrollController ScrollViewerProperties::VerticalScrollController()
{
    return ValueHelper<winrt::IScrollController>::CastOrUnbox(static_cast<ScrollViewer*>(this)->GetValue(s_VerticalScrollControllerProperty));
}

void ScrollViewerProperties::VerticalScrollMode(winrt::ScrollMode const& value)
{
    static_cast<ScrollViewer*>(this)->SetValue(s_VerticalScrollModeProperty, ValueHelper<winrt::ScrollMode>::BoxValueIfNecessary(value));
}

winrt::ScrollMode ScrollViewerProperties::VerticalScrollMode()
{
    return ValueHelper<winrt::ScrollMode>::CastOrUnbox(static_cast<ScrollViewer*>(this)->GetValue(s_VerticalScrollModeProperty));
}

void ScrollViewerProperties::VerticalScrollRailingMode(winrt::RailingMode const& value)
{
    static_cast<ScrollViewer*>(this)->SetValue(s_VerticalScrollRailingModeProperty, ValueHelper<winrt::RailingMode>::BoxValueIfNecessary(value));
}

winrt::RailingMode ScrollViewerProperties::VerticalScrollRailingMode()
{
    return ValueHelper<winrt::RailingMode>::CastOrUnbox(static_cast<ScrollViewer*>(this)->GetValue(s_VerticalScrollRailingModeProperty));
}

void ScrollViewerProperties::ZoomChainingMode(winrt::ChainingMode const& value)
{
    static_cast<ScrollViewer*>(this)->SetValue(s_ZoomChainingModeProperty, ValueHelper<winrt::ChainingMode>::BoxValueIfNecessary(value));
}

winrt::ChainingMode ScrollViewerProperties::ZoomChainingMode()
{
    return ValueHelper<winrt::ChainingMode>::CastOrUnbox(static_cast<ScrollViewer*>(this)->GetValue(s_ZoomChainingModeProperty));
}

void ScrollViewerProperties::ZoomMode(winrt::ZoomMode const& value)
{
    static_cast<ScrollViewer*>(this)->SetValue(s_ZoomModeProperty, ValueHelper<winrt::ZoomMode>::BoxValueIfNecessary(value));
}

winrt::ZoomMode ScrollViewerProperties::ZoomMode()
{
    return ValueHelper<winrt::ZoomMode>::CastOrUnbox(static_cast<ScrollViewer*>(this)->GetValue(s_ZoomModeProperty));
}

winrt::event_token ScrollViewerProperties::AnchorRequested(winrt::TypedEventHandler<winrt::ScrollViewer, winrt::ScrollerAnchorRequestedEventArgs> const& value)
{
    return m_anchorRequestedEventSource.add(value);
}

void ScrollViewerProperties::AnchorRequested(winrt::event_token const& token)
{
    m_anchorRequestedEventSource.remove(token);
}

winrt::event_token ScrollViewerProperties::BringingIntoView(winrt::TypedEventHandler<winrt::ScrollViewer, winrt::ScrollerBringingIntoViewEventArgs> const& value)
{
    return m_bringingIntoViewEventSource.add(value);
}

void ScrollViewerProperties::BringingIntoView(winrt::event_token const& token)
{
    m_bringingIntoViewEventSource.remove(token);
}

winrt::event_token ScrollViewerProperties::ChangingOffsets(winrt::TypedEventHandler<winrt::ScrollViewer, winrt::ScrollerChangingOffsetsEventArgs> const& value)
{
    return m_changingOffsetsEventSource.add(value);
}

void ScrollViewerProperties::ChangingOffsets(winrt::event_token const& token)
{
    m_changingOffsetsEventSource.remove(token);
}

winrt::event_token ScrollViewerProperties::ChangingZoomFactor(winrt::TypedEventHandler<winrt::ScrollViewer, winrt::ScrollerChangingZoomFactorEventArgs> const& value)
{
    return m_changingZoomFactorEventSource.add(value);
}

void ScrollViewerProperties::ChangingZoomFactor(winrt::event_token const& token)
{
    m_changingZoomFactorEventSource.remove(token);
}

winrt::event_token ScrollViewerProperties::ExtentChanged(winrt::TypedEventHandler<winrt::ScrollViewer, winrt::IInspectable> const& value)
{
    return m_extentChangedEventSource.add(value);
}

void ScrollViewerProperties::ExtentChanged(winrt::event_token const& token)
{
    m_extentChangedEventSource.remove(token);
}

winrt::event_token ScrollViewerProperties::StateChanged(winrt::TypedEventHandler<winrt::ScrollViewer, winrt::IInspectable> const& value)
{
    return m_stateChangedEventSource.add(value);
}

void ScrollViewerProperties::StateChanged(winrt::event_token const& token)
{
    m_stateChangedEventSource.remove(token);
}

winrt::event_token ScrollViewerProperties::ViewChangeCompleted(winrt::TypedEventHandler<winrt::ScrollViewer, winrt::ScrollerViewChangeCompletedEventArgs> const& value)
{
    return m_viewChangeCompletedEventSource.add(value);
}

void ScrollViewerProperties::ViewChangeCompleted(winrt::event_token const& token)
{
    m_viewChangeCompletedEventSource.remove(token);
}

winrt::event_token ScrollViewerProperties::ViewChanged(winrt::TypedEventHandler<winrt::ScrollViewer, winrt::IInspectable> const& value)
{
    return m_viewChangedEventSource.add(value);
}

void ScrollViewerProperties::ViewChanged(winrt::event_token const& token)
{
    m_viewChangedEventSource.remove(token);
}