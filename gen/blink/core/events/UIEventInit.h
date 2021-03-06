// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#ifndef UIEventInit_h
#define UIEventInit_h

#include "bindings/core/v8/Nullable.h"
#include "core/CoreExport.h"
#include "core/events/EventInit.h"
#include "core/frame/DOMWindow.h"
#include "core/input/InputDevice.h"
#include "platform/heap/Handle.h"

namespace blink {

class CORE_EXPORT UIEventInit : public EventInit {
    ALLOW_ONLY_INLINE_ALLOCATION();
public:
    UIEventInit();

    bool hasDetail() const { return !m_detail.isNull(); }
    int detail() const { return m_detail.get(); }
    void setDetail(int value) { m_detail = value; }

    bool hasSourceDevice() const { return m_sourceDevice; }
    InputDevice* sourceDevice() const { return m_sourceDevice; }
    void setSourceDevice(InputDevice* value) { m_sourceDevice = value; }
    void setSourceDeviceToNull() { m_sourceDevice = Member<InputDevice>(); }

    bool hasView() const { return m_view; }
    PassRefPtrWillBeRawPtr<DOMWindow> view() const { return m_view; }
    void setView(PassRefPtrWillBeRawPtr<DOMWindow> value) { m_view = value; }
    void setViewToNull() { m_view = RefPtrWillBeMember<DOMWindow>(); }

    DECLARE_VIRTUAL_TRACE();

private:
    Nullable<int> m_detail;
    Member<InputDevice> m_sourceDevice;
    RefPtrWillBeMember<DOMWindow> m_view;

    friend class V8UIEventInit;
};

} // namespace blink

#endif // UIEventInit_h
