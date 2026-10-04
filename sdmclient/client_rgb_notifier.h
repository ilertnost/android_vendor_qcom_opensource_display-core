/*
 * Copyright (c) 2026 The LineageOS Project
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef __CLIENT_RGB_NOTIFIER_H__
#define __CLIENT_RGB_NOTIFIER_H__

#include <utils/RefBase.h>

// Implemented by Xiaomi's libclient2slpi.notifier.so.
class clientRGBNotifier : public android::RefBase {
 public:
  clientRGBNotifier();
  virtual ~clientRGBNotifier();

  void SendFrameUpdateSingnal(bool is_forced);
};

#endif  // __CLIENT_RGB_NOTIFIER_H__
