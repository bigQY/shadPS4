// SPDX-FileCopyrightText: Copyright 2024 shadPS4 Emulator Project
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "library_common.h"

namespace Libraries::AudioIn {

int PS4_SYSV_ABI sceAudioInChangeAppModuleState();
int PS4_SYSV_ABI sceAudioInClose();
int PS4_SYSV_ABI sceAudioInCountPorts();
int PS4_SYSV_ABI sceAudioInDeviceHqOpen();
int PS4_SYSV_ABI sceAudioInDeviceIdHqOpen();
int PS4_SYSV_ABI sceAudioInDeviceIdOpen();
int PS4_SYSV_ABI sceAudioInDeviceOpen();
int PS4_SYSV_ABI sceAudioInDeviceOpenEx();
int PS4_SYSV_ABI sceAudioInExtClose();
int PS4_SYSV_ABI sceAudioInExtCtrl();
int PS4_SYSV_ABI sceAudioInExtInput();
int PS4_SYSV_ABI sceAudioInExtOpen();
int PS4_SYSV_ABI sceAudioInExtSetAecMode();
int PS4_SYSV_ABI sceAudioInGetGain();
int PS4_SYSV_ABI sceAudioInGetHandleStatusInfo();
int PS4_SYSV_ABI sceAudioInGetRerouteCount();
int PS4_SYSV_ABI sceAudioInGetSilentState();
int PS4_SYSV_ABI sceAudioInHqOpen();
int PS4_SYSV_ABI sceAudioInHqOpenEx();
int PS4_SYSV_ABI sceAudioInInit();
int PS4_SYSV_ABI sceAudioInInput();
int PS4_SYSV_ABI sceAudioInInputs();
int PS4_SYSV_ABI sceAudioInIsSharedDevice();
int PS4_SYSV_ABI sceAudioInOpen();
int PS4_SYSV_ABI sceAudioInOpenEx();
int PS4_SYSV_ABI sceAudioInSetAllMute();
int PS4_SYSV_ABI sceAudioInSetCompressorPreGain();
int PS4_SYSV_ABI sceAudioInSetConnections();
int PS4_SYSV_ABI sceAudioInSetConnectionsForUser();
int PS4_SYSV_ABI sceAudioInSetDevConnection();
int PS4_SYSV_ABI sceAudioInSetFocusForUser();
int PS4_SYSV_ABI sceAudioInSetMode();
int PS4_SYSV_ABI sceAudioInSetMode2();
int PS4_SYSV_ABI sceAudioInSetPortConnections();
int PS4_SYSV_ABI sceAudioInSetPortStatuses();
int PS4_SYSV_ABI sceAudioInSetSparkParam();
int PS4_SYSV_ABI sceAudioInSetSparkSideTone();
int PS4_SYSV_ABI sceAudioInSetUsbGain();
int PS4_SYSV_ABI sceAudioInSetUserMute();
int PS4_SYSV_ABI sceAudioInVmicCreate();
int PS4_SYSV_ABI sceAudioInVmicDestroy();
int PS4_SYSV_ABI sceAudioInVmicWrite();

void RegisterlibSceAudioIn(Core::Loader::SymbolsResolver* sym);
} // namespace Libraries::AudioIn