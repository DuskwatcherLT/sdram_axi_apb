#ifndef _GNU_SOURCE
#define _GNU_SOURCE
#endif
#include <stdio.h>
#include <dlfcn.h>

#ifdef __cplusplus
extern "C" {
#endif

extern void* VCS_dlsymLookup(const char *);
extern void vcsMsgReportNoSource1(const char *, const char*);

/* PLI routine: $vcdplusfile:call */
#ifndef __VCS_PLI_STUB_vpCallVcdPlusFile
#define __VCS_PLI_STUB_vpCallVcdPlusFile
extern void vpCallVcdPlusFile(int data, int reason);
#pragma weak vpCallVcdPlusFile
void vpCallVcdPlusFile(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "vpCallVcdPlusFile");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("vpCallVcdPlusFile");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "vpCallVcdPlusFile");
    }
}
void (*__vcs_pli_dummy_reference_vpCallVcdPlusFile)(int data, int reason) = vpCallVcdPlusFile;
#endif /* __VCS_PLI_STUB_vpCallVcdPlusFile */

/* PLI routine: $vcdplusfile:check */
#ifndef __VCS_PLI_STUB_vpCheckVcdPlusFile
#define __VCS_PLI_STUB_vpCheckVcdPlusFile
extern void vpCheckVcdPlusFile(int data, int reason);
#pragma weak vpCheckVcdPlusFile
void vpCheckVcdPlusFile(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "vpCheckVcdPlusFile");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("vpCheckVcdPlusFile");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    }
}
void (*__vcs_pli_dummy_reference_vpCheckVcdPlusFile)(int data, int reason) = vpCheckVcdPlusFile;
#endif /* __VCS_PLI_STUB_vpCheckVcdPlusFile */

/* PLI routine: $vcdplusfileswitch:call */
#ifndef __VCS_PLI_STUB_vcsdCallVcdPlusFileSwitch
#define __VCS_PLI_STUB_vcsdCallVcdPlusFileSwitch
extern void vcsdCallVcdPlusFileSwitch(int data, int reason);
#pragma weak vcsdCallVcdPlusFileSwitch
void vcsdCallVcdPlusFileSwitch(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "vcsdCallVcdPlusFileSwitch");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("vcsdCallVcdPlusFileSwitch");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "vcsdCallVcdPlusFileSwitch");
    }
}
void (*__vcs_pli_dummy_reference_vcsdCallVcdPlusFileSwitch)(int data, int reason) = vcsdCallVcdPlusFileSwitch;
#endif /* __VCS_PLI_STUB_vcsdCallVcdPlusFileSwitch */

/* PLI routine: $vcdplusoff:call */
#ifndef __VCS_PLI_STUB_vcsdCallVcdPlus
#define __VCS_PLI_STUB_vcsdCallVcdPlus
extern void vcsdCallVcdPlus(int data, int reason);
#pragma weak vcsdCallVcdPlus
void vcsdCallVcdPlus(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "vcsdCallVcdPlus");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("vcsdCallVcdPlus");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "vcsdCallVcdPlus");
    }
}
void (*__vcs_pli_dummy_reference_vcsdCallVcdPlus)(int data, int reason) = vcsdCallVcdPlus;
#endif /* __VCS_PLI_STUB_vcsdCallVcdPlus */

/* PLI routine: $vcdplusoff:check */
#ifndef __VCS_PLI_STUB_vcsdCheckVcdPlus
#define __VCS_PLI_STUB_vcsdCheckVcdPlus
extern void vcsdCheckVcdPlus(int data, int reason);
#pragma weak vcsdCheckVcdPlus
void vcsdCheckVcdPlus(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "vcsdCheckVcdPlus");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("vcsdCheckVcdPlus");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    }
}
void (*__vcs_pli_dummy_reference_vcsdCheckVcdPlus)(int data, int reason) = vcsdCheckVcdPlus;
#endif /* __VCS_PLI_STUB_vcsdCheckVcdPlus */

/* PLI routine: $vcdplusoff:misc */
#ifndef __VCS_PLI_STUB_vcsdMiscVcdPlus
#define __VCS_PLI_STUB_vcsdMiscVcdPlus
extern void vcsdMiscVcdPlus(int data, int reason);
#pragma weak vcsdMiscVcdPlus
void vcsdMiscVcdPlus(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "vcsdMiscVcdPlus");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("vcsdMiscVcdPlus");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    }
}
void (*__vcs_pli_dummy_reference_vcsdMiscVcdPlus)(int data, int reason) = vcsdMiscVcdPlus;
#endif /* __VCS_PLI_STUB_vcsdMiscVcdPlus */

/* PLI routine: $vcdplusmemoff:call */
#ifndef __VCS_PLI_STUB_vcsdCallVcdPlusMemory
#define __VCS_PLI_STUB_vcsdCallVcdPlusMemory
extern void vcsdCallVcdPlusMemory(int data, int reason);
#pragma weak vcsdCallVcdPlusMemory
void vcsdCallVcdPlusMemory(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "vcsdCallVcdPlusMemory");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("vcsdCallVcdPlusMemory");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "vcsdCallVcdPlusMemory");
    }
}
void (*__vcs_pli_dummy_reference_vcsdCallVcdPlusMemory)(int data, int reason) = vcsdCallVcdPlusMemory;
#endif /* __VCS_PLI_STUB_vcsdCallVcdPlusMemory */

/* PLI routine: $vcdplusmemoff:check */
#ifndef __VCS_PLI_STUB_vcsdCheckVcdPlusMemory
#define __VCS_PLI_STUB_vcsdCheckVcdPlusMemory
extern void vcsdCheckVcdPlusMemory(int data, int reason);
#pragma weak vcsdCheckVcdPlusMemory
void vcsdCheckVcdPlusMemory(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "vcsdCheckVcdPlusMemory");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("vcsdCheckVcdPlusMemory");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    }
}
void (*__vcs_pli_dummy_reference_vcsdCheckVcdPlusMemory)(int data, int reason) = vcsdCheckVcdPlusMemory;
#endif /* __VCS_PLI_STUB_vcsdCheckVcdPlusMemory */

/* PLI routine: $vcdplusclose:call */
#ifndef __VCS_PLI_STUB_vcsdCallVcdPlusClose
#define __VCS_PLI_STUB_vcsdCallVcdPlusClose
extern void vcsdCallVcdPlusClose(int data, int reason);
#pragma weak vcsdCallVcdPlusClose
void vcsdCallVcdPlusClose(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "vcsdCallVcdPlusClose");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("vcsdCallVcdPlusClose");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "vcsdCallVcdPlusClose");
    }
}
void (*__vcs_pli_dummy_reference_vcsdCallVcdPlusClose)(int data, int reason) = vcsdCallVcdPlusClose;
#endif /* __VCS_PLI_STUB_vcsdCallVcdPlusClose */

/* PLI routine: $vcdplusclose:check */
#ifndef __VCS_PLI_STUB_vcsdCheckVcdPlusClose
#define __VCS_PLI_STUB_vcsdCheckVcdPlusClose
extern void vcsdCheckVcdPlusClose(int data, int reason);
#pragma weak vcsdCheckVcdPlusClose
void vcsdCheckVcdPlusClose(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "vcsdCheckVcdPlusClose");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("vcsdCheckVcdPlusClose");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    }
}
void (*__vcs_pli_dummy_reference_vcsdCheckVcdPlusClose)(int data, int reason) = vcsdCheckVcdPlusClose;
#endif /* __VCS_PLI_STUB_vcsdCheckVcdPlusClose */

/* PLI routine: $vcdplusflush:call */
#ifndef __VCS_PLI_STUB_vcsdCallVcdPlusFlush
#define __VCS_PLI_STUB_vcsdCallVcdPlusFlush
extern void vcsdCallVcdPlusFlush(int data, int reason);
#pragma weak vcsdCallVcdPlusFlush
void vcsdCallVcdPlusFlush(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "vcsdCallVcdPlusFlush");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("vcsdCallVcdPlusFlush");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "vcsdCallVcdPlusFlush");
    }
}
void (*__vcs_pli_dummy_reference_vcsdCallVcdPlusFlush)(int data, int reason) = vcsdCallVcdPlusFlush;
#endif /* __VCS_PLI_STUB_vcsdCallVcdPlusFlush */

/* PLI routine: $vcdplusdeltacycleoff:call */
#ifndef __VCS_PLI_STUB_vcsdCallVcdPlusDeltaCycle
#define __VCS_PLI_STUB_vcsdCallVcdPlusDeltaCycle
extern void vcsdCallVcdPlusDeltaCycle(int data, int reason);
#pragma weak vcsdCallVcdPlusDeltaCycle
void vcsdCallVcdPlusDeltaCycle(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "vcsdCallVcdPlusDeltaCycle");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("vcsdCallVcdPlusDeltaCycle");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "vcsdCallVcdPlusDeltaCycle");
    }
}
void (*__vcs_pli_dummy_reference_vcsdCallVcdPlusDeltaCycle)(int data, int reason) = vcsdCallVcdPlusDeltaCycle;
#endif /* __VCS_PLI_STUB_vcsdCallVcdPlusDeltaCycle */

/* PLI routine: $vcdplusevent:call */
#ifndef __VCS_PLI_STUB_vcsdCallVcdPlusEvent
#define __VCS_PLI_STUB_vcsdCallVcdPlusEvent
extern void vcsdCallVcdPlusEvent(int data, int reason);
#pragma weak vcsdCallVcdPlusEvent
void vcsdCallVcdPlusEvent(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "vcsdCallVcdPlusEvent");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("vcsdCallVcdPlusEvent");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "vcsdCallVcdPlusEvent");
    }
}
void (*__vcs_pli_dummy_reference_vcsdCallVcdPlusEvent)(int data, int reason) = vcsdCallVcdPlusEvent;
#endif /* __VCS_PLI_STUB_vcsdCallVcdPlusEvent */

/* PLI routine: $vcdplusevent:check */
#ifndef __VCS_PLI_STUB_vcsdCheckVcdPlusEvent
#define __VCS_PLI_STUB_vcsdCheckVcdPlusEvent
extern void vcsdCheckVcdPlusEvent(int data, int reason);
#pragma weak vcsdCheckVcdPlusEvent
void vcsdCheckVcdPlusEvent(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "vcsdCheckVcdPlusEvent");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("vcsdCheckVcdPlusEvent");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    }
}
void (*__vcs_pli_dummy_reference_vcsdCheckVcdPlusEvent)(int data, int reason) = vcsdCheckVcdPlusEvent;
#endif /* __VCS_PLI_STUB_vcsdCheckVcdPlusEvent */

/* PLI routine: $vcdplusglitchoff:call */
#ifndef __VCS_PLI_STUB_vcsdCallVcdPlusGlitch
#define __VCS_PLI_STUB_vcsdCallVcdPlusGlitch
extern void vcsdCallVcdPlusGlitch(int data, int reason);
#pragma weak vcsdCallVcdPlusGlitch
void vcsdCallVcdPlusGlitch(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "vcsdCallVcdPlusGlitch");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("vcsdCallVcdPlusGlitch");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "vcsdCallVcdPlusGlitch");
    }
}
void (*__vcs_pli_dummy_reference_vcsdCallVcdPlusGlitch)(int data, int reason) = vcsdCallVcdPlusGlitch;
#endif /* __VCS_PLI_STUB_vcsdCallVcdPlusGlitch */

/* PLI routine: $vcdplusfilter:call */
#ifndef __VCS_PLI_STUB_vcsdCallVcdPlusFilter
#define __VCS_PLI_STUB_vcsdCallVcdPlusFilter
extern void vcsdCallVcdPlusFilter(int data, int reason);
#pragma weak vcsdCallVcdPlusFilter
void vcsdCallVcdPlusFilter(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "vcsdCallVcdPlusFilter");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("vcsdCallVcdPlusFilter");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "vcsdCallVcdPlusFilter");
    }
}
void (*__vcs_pli_dummy_reference_vcsdCallVcdPlusFilter)(int data, int reason) = vcsdCallVcdPlusFilter;
#endif /* __VCS_PLI_STUB_vcsdCallVcdPlusFilter */

/* PLI routine: $vcdplusfilter:check */
#ifndef __VCS_PLI_STUB_vcsdCheckVcdPlusFilter
#define __VCS_PLI_STUB_vcsdCheckVcdPlusFilter
extern void vcsdCheckVcdPlusFilter(int data, int reason);
#pragma weak vcsdCheckVcdPlusFilter
void vcsdCheckVcdPlusFilter(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "vcsdCheckVcdPlusFilter");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("vcsdCheckVcdPlusFilter");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    }
}
void (*__vcs_pli_dummy_reference_vcsdCheckVcdPlusFilter)(int data, int reason) = vcsdCheckVcdPlusFilter;
#endif /* __VCS_PLI_STUB_vcsdCheckVcdPlusFilter */

/* PLI routine: $vcdplustblog:call */
#ifndef __VCS_PLI_STUB_vpdlogMain
#define __VCS_PLI_STUB_vpdlogMain
extern void vpdlogMain(int data, int reason);
#pragma weak vpdlogMain
void vpdlogMain(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "vpdlogMain");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("vpdlogMain");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "vpdlogMain");
    }
}
void (*__vcs_pli_dummy_reference_vpdlogMain)(int data, int reason) = vpdlogMain;
#endif /* __VCS_PLI_STUB_vpdlogMain */

/* PLI routine: $vcdplustblog:check */
#ifndef __VCS_PLI_STUB_vpdlogCheckArgs
#define __VCS_PLI_STUB_vpdlogCheckArgs
extern void vpdlogCheckArgs(int data, int reason);
#pragma weak vpdlogCheckArgs
void vpdlogCheckArgs(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "vpdlogCheckArgs");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("vpdlogCheckArgs");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    }
}
void (*__vcs_pli_dummy_reference_vpdlogCheckArgs)(int data, int reason) = vpdlogCheckArgs;
#endif /* __VCS_PLI_STUB_vpdlogCheckArgs */

/* PLI routine: $vcdplustblogon:call */
#ifndef __VCS_PLI_STUB_vpdlogControl
#define __VCS_PLI_STUB_vpdlogControl
extern void vpdlogControl(int data, int reason);
#pragma weak vpdlogControl
void vpdlogControl(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "vpdlogControl");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("vpdlogControl");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "vpdlogControl");
    }
}
void (*__vcs_pli_dummy_reference_vpdlogControl)(int data, int reason) = vpdlogControl;
#endif /* __VCS_PLI_STUB_vpdlogControl */

/* PLI routine: $vcdplusmsglog:call */
#ifndef __VCS_PLI_STUB_msglogMain
#define __VCS_PLI_STUB_msglogMain
extern void msglogMain(int data, int reason);
#pragma weak msglogMain
void msglogMain(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "msglogMain");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("msglogMain");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "msglogMain");
    }
}
void (*__vcs_pli_dummy_reference_msglogMain)(int data, int reason) = msglogMain;
#endif /* __VCS_PLI_STUB_msglogMain */

/* PLI routine: $vcdplusmsglog:check */
#ifndef __VCS_PLI_STUB_msglogCheckArgs
#define __VCS_PLI_STUB_msglogCheckArgs
extern void msglogCheckArgs(int data, int reason);
#pragma weak msglogCheckArgs
void msglogCheckArgs(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "msglogCheckArgs");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("msglogCheckArgs");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    }
}
void (*__vcs_pli_dummy_reference_msglogCheckArgs)(int data, int reason) = msglogCheckArgs;
#endif /* __VCS_PLI_STUB_msglogCheckArgs */

/* PLI routine: $vcdplusmsglogon:call */
#ifndef __VCS_PLI_STUB_msglogControl
#define __VCS_PLI_STUB_msglogControl
extern void msglogControl(int data, int reason);
#pragma weak msglogControl
void msglogControl(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "msglogControl");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("msglogControl");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "msglogControl");
    }
}
void (*__vcs_pli_dummy_reference_msglogControl)(int data, int reason) = msglogControl;
#endif /* __VCS_PLI_STUB_msglogControl */

/* PLI routine: $vcs_get_object_id:call */
#ifndef __VCS_PLI_STUB_vcs_get_object_id
#define __VCS_PLI_STUB_vcs_get_object_id
extern void vcs_get_object_id(int data, int reason);
#pragma weak vcs_get_object_id
void vcs_get_object_id(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "vcs_get_object_id");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("vcs_get_object_id");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "vcs_get_object_id");
    }
}
void (*__vcs_pli_dummy_reference_vcs_get_object_id)(int data, int reason) = vcs_get_object_id;
#endif /* __VCS_PLI_STUB_vcs_get_object_id */

/* PLI routine: $vcs_get_object_type:call */
#ifndef __VCS_PLI_STUB_vcs_get_object_type
#define __VCS_PLI_STUB_vcs_get_object_type
extern void vcs_get_object_type(int data, int reason);
#pragma weak vcs_get_object_type
void vcs_get_object_type(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "vcs_get_object_type");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("vcs_get_object_type");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "vcs_get_object_type");
    }
}
void (*__vcs_pli_dummy_reference_vcs_get_object_type)(int data, int reason) = vcs_get_object_type;
#endif /* __VCS_PLI_STUB_vcs_get_object_type */

/* PLI routine: $fsdbDumpvars:call */
#ifndef __VCS_PLI_STUB_novas_call_fsdbDumpvars
#define __VCS_PLI_STUB_novas_call_fsdbDumpvars
extern void novas_call_fsdbDumpvars(int data, int reason);
#pragma weak novas_call_fsdbDumpvars
void novas_call_fsdbDumpvars(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "novas_call_fsdbDumpvars");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("novas_call_fsdbDumpvars");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "novas_call_fsdbDumpvars");
    }
}
void (*__vcs_pli_dummy_reference_novas_call_fsdbDumpvars)(int data, int reason) = novas_call_fsdbDumpvars;
#endif /* __VCS_PLI_STUB_novas_call_fsdbDumpvars */

/* PLI routine: $fsdbDumpvars:misc */
#ifndef __VCS_PLI_STUB_novas_misc
#define __VCS_PLI_STUB_novas_misc
extern void novas_misc(int data, int reason);
#pragma weak novas_misc
void novas_misc(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "novas_misc");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("novas_misc");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    }
}
void (*__vcs_pli_dummy_reference_novas_misc)(int data, int reason) = novas_misc;
#endif /* __VCS_PLI_STUB_novas_misc */

/* PLI routine: $fsdbDumpvarsByFile:call */
#ifndef __VCS_PLI_STUB_novas_call_fsdbDumpvarsByFile
#define __VCS_PLI_STUB_novas_call_fsdbDumpvarsByFile
extern void novas_call_fsdbDumpvarsByFile(int data, int reason);
#pragma weak novas_call_fsdbDumpvarsByFile
void novas_call_fsdbDumpvarsByFile(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "novas_call_fsdbDumpvarsByFile");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("novas_call_fsdbDumpvarsByFile");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "novas_call_fsdbDumpvarsByFile");
    }
}
void (*__vcs_pli_dummy_reference_novas_call_fsdbDumpvarsByFile)(int data, int reason) = novas_call_fsdbDumpvarsByFile;
#endif /* __VCS_PLI_STUB_novas_call_fsdbDumpvarsByFile */

/* PLI routine: $fsdbAddRuntimeSignal:call */
#ifndef __VCS_PLI_STUB_novas_call_fsdbAddRuntimeSignal
#define __VCS_PLI_STUB_novas_call_fsdbAddRuntimeSignal
extern void novas_call_fsdbAddRuntimeSignal(int data, int reason);
#pragma weak novas_call_fsdbAddRuntimeSignal
void novas_call_fsdbAddRuntimeSignal(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "novas_call_fsdbAddRuntimeSignal");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("novas_call_fsdbAddRuntimeSignal");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "novas_call_fsdbAddRuntimeSignal");
    }
}
void (*__vcs_pli_dummy_reference_novas_call_fsdbAddRuntimeSignal)(int data, int reason) = novas_call_fsdbAddRuntimeSignal;
#endif /* __VCS_PLI_STUB_novas_call_fsdbAddRuntimeSignal */

/* PLI routine: $sps_create_transaction_stream:call */
#ifndef __VCS_PLI_STUB_novas_call_sps_create_transaction_stream
#define __VCS_PLI_STUB_novas_call_sps_create_transaction_stream
extern void novas_call_sps_create_transaction_stream(int data, int reason);
#pragma weak novas_call_sps_create_transaction_stream
void novas_call_sps_create_transaction_stream(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "novas_call_sps_create_transaction_stream");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("novas_call_sps_create_transaction_stream");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "novas_call_sps_create_transaction_stream");
    }
}
void (*__vcs_pli_dummy_reference_novas_call_sps_create_transaction_stream)(int data, int reason) = novas_call_sps_create_transaction_stream;
#endif /* __VCS_PLI_STUB_novas_call_sps_create_transaction_stream */

/* PLI routine: $sps_begin_transaction:call */
#ifndef __VCS_PLI_STUB_novas_call_sps_begin_transaction
#define __VCS_PLI_STUB_novas_call_sps_begin_transaction
extern void novas_call_sps_begin_transaction(int data, int reason);
#pragma weak novas_call_sps_begin_transaction
void novas_call_sps_begin_transaction(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "novas_call_sps_begin_transaction");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("novas_call_sps_begin_transaction");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "novas_call_sps_begin_transaction");
    }
}
void (*__vcs_pli_dummy_reference_novas_call_sps_begin_transaction)(int data, int reason) = novas_call_sps_begin_transaction;
#endif /* __VCS_PLI_STUB_novas_call_sps_begin_transaction */

/* PLI routine: $sps_end_transaction:call */
#ifndef __VCS_PLI_STUB_novas_call_sps_end_transaction
#define __VCS_PLI_STUB_novas_call_sps_end_transaction
extern void novas_call_sps_end_transaction(int data, int reason);
#pragma weak novas_call_sps_end_transaction
void novas_call_sps_end_transaction(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "novas_call_sps_end_transaction");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("novas_call_sps_end_transaction");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "novas_call_sps_end_transaction");
    }
}
void (*__vcs_pli_dummy_reference_novas_call_sps_end_transaction)(int data, int reason) = novas_call_sps_end_transaction;
#endif /* __VCS_PLI_STUB_novas_call_sps_end_transaction */

/* PLI routine: $sps_free_transaction:call */
#ifndef __VCS_PLI_STUB_novas_call_sps_free_transaction
#define __VCS_PLI_STUB_novas_call_sps_free_transaction
extern void novas_call_sps_free_transaction(int data, int reason);
#pragma weak novas_call_sps_free_transaction
void novas_call_sps_free_transaction(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "novas_call_sps_free_transaction");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("novas_call_sps_free_transaction");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "novas_call_sps_free_transaction");
    }
}
void (*__vcs_pli_dummy_reference_novas_call_sps_free_transaction)(int data, int reason) = novas_call_sps_free_transaction;
#endif /* __VCS_PLI_STUB_novas_call_sps_free_transaction */

/* PLI routine: $sps_add_attribute:call */
#ifndef __VCS_PLI_STUB_novas_call_sps_add_attribute
#define __VCS_PLI_STUB_novas_call_sps_add_attribute
extern void novas_call_sps_add_attribute(int data, int reason);
#pragma weak novas_call_sps_add_attribute
void novas_call_sps_add_attribute(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "novas_call_sps_add_attribute");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("novas_call_sps_add_attribute");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "novas_call_sps_add_attribute");
    }
}
void (*__vcs_pli_dummy_reference_novas_call_sps_add_attribute)(int data, int reason) = novas_call_sps_add_attribute;
#endif /* __VCS_PLI_STUB_novas_call_sps_add_attribute */

/* PLI routine: $sps_update_label:call */
#ifndef __VCS_PLI_STUB_novas_call_sps_update_label
#define __VCS_PLI_STUB_novas_call_sps_update_label
extern void novas_call_sps_update_label(int data, int reason);
#pragma weak novas_call_sps_update_label
void novas_call_sps_update_label(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "novas_call_sps_update_label");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("novas_call_sps_update_label");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "novas_call_sps_update_label");
    }
}
void (*__vcs_pli_dummy_reference_novas_call_sps_update_label)(int data, int reason) = novas_call_sps_update_label;
#endif /* __VCS_PLI_STUB_novas_call_sps_update_label */

/* PLI routine: $sps_add_relation:call */
#ifndef __VCS_PLI_STUB_novas_call_sps_add_relation
#define __VCS_PLI_STUB_novas_call_sps_add_relation
extern void novas_call_sps_add_relation(int data, int reason);
#pragma weak novas_call_sps_add_relation
void novas_call_sps_add_relation(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "novas_call_sps_add_relation");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("novas_call_sps_add_relation");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "novas_call_sps_add_relation");
    }
}
void (*__vcs_pli_dummy_reference_novas_call_sps_add_relation)(int data, int reason) = novas_call_sps_add_relation;
#endif /* __VCS_PLI_STUB_novas_call_sps_add_relation */

/* PLI routine: $fsdbWhatif:call */
#ifndef __VCS_PLI_STUB_novas_call_fsdbWhatif
#define __VCS_PLI_STUB_novas_call_fsdbWhatif
extern void novas_call_fsdbWhatif(int data, int reason);
#pragma weak novas_call_fsdbWhatif
void novas_call_fsdbWhatif(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "novas_call_fsdbWhatif");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("novas_call_fsdbWhatif");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "novas_call_fsdbWhatif");
    }
}
void (*__vcs_pli_dummy_reference_novas_call_fsdbWhatif)(int data, int reason) = novas_call_fsdbWhatif;
#endif /* __VCS_PLI_STUB_novas_call_fsdbWhatif */

/* PLI routine: $fsdbDumpClassMethod:call */
#ifndef __VCS_PLI_STUB_novas_call_fsdbDumpClassMethod
#define __VCS_PLI_STUB_novas_call_fsdbDumpClassMethod
extern void novas_call_fsdbDumpClassMethod(int data, int reason);
#pragma weak novas_call_fsdbDumpClassMethod
void novas_call_fsdbDumpClassMethod(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "novas_call_fsdbDumpClassMethod");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("novas_call_fsdbDumpClassMethod");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "novas_call_fsdbDumpClassMethod");
    }
}
void (*__vcs_pli_dummy_reference_novas_call_fsdbDumpClassMethod)(int data, int reason) = novas_call_fsdbDumpClassMethod;
#endif /* __VCS_PLI_STUB_novas_call_fsdbDumpClassMethod */

/* PLI routine: $fsdbSuppressClassMethod:call */
#ifndef __VCS_PLI_STUB_novas_call_fsdbSuppressClassMethod
#define __VCS_PLI_STUB_novas_call_fsdbSuppressClassMethod
extern void novas_call_fsdbSuppressClassMethod(int data, int reason);
#pragma weak novas_call_fsdbSuppressClassMethod
void novas_call_fsdbSuppressClassMethod(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "novas_call_fsdbSuppressClassMethod");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("novas_call_fsdbSuppressClassMethod");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "novas_call_fsdbSuppressClassMethod");
    }
}
void (*__vcs_pli_dummy_reference_novas_call_fsdbSuppressClassMethod)(int data, int reason) = novas_call_fsdbSuppressClassMethod;
#endif /* __VCS_PLI_STUB_novas_call_fsdbSuppressClassMethod */

/* PLI routine: $fsdbSuppressClassProp:call */
#ifndef __VCS_PLI_STUB_novas_call_fsdbSuppressClassProp
#define __VCS_PLI_STUB_novas_call_fsdbSuppressClassProp
extern void novas_call_fsdbSuppressClassProp(int data, int reason);
#pragma weak novas_call_fsdbSuppressClassProp
void novas_call_fsdbSuppressClassProp(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "novas_call_fsdbSuppressClassProp");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("novas_call_fsdbSuppressClassProp");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "novas_call_fsdbSuppressClassProp");
    }
}
void (*__vcs_pli_dummy_reference_novas_call_fsdbSuppressClassProp)(int data, int reason) = novas_call_fsdbSuppressClassProp;
#endif /* __VCS_PLI_STUB_novas_call_fsdbSuppressClassProp */

/* PLI routine: $fsdbDumpMDAByFile:call */
#ifndef __VCS_PLI_STUB_novas_call_fsdbDumpMDAByFile
#define __VCS_PLI_STUB_novas_call_fsdbDumpMDAByFile
extern void novas_call_fsdbDumpMDAByFile(int data, int reason);
#pragma weak novas_call_fsdbDumpMDAByFile
void novas_call_fsdbDumpMDAByFile(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "novas_call_fsdbDumpMDAByFile");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("novas_call_fsdbDumpMDAByFile");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "novas_call_fsdbDumpMDAByFile");
    }
}
void (*__vcs_pli_dummy_reference_novas_call_fsdbDumpMDAByFile)(int data, int reason) = novas_call_fsdbDumpMDAByFile;
#endif /* __VCS_PLI_STUB_novas_call_fsdbDumpMDAByFile */

/* PLI routine: $fsdbTrans_create_stream_begin:call */
#ifndef __VCS_PLI_STUB_novas_call_fsdbEvent_create_stream_begin
#define __VCS_PLI_STUB_novas_call_fsdbEvent_create_stream_begin
extern void novas_call_fsdbEvent_create_stream_begin(int data, int reason);
#pragma weak novas_call_fsdbEvent_create_stream_begin
void novas_call_fsdbEvent_create_stream_begin(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "novas_call_fsdbEvent_create_stream_begin");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("novas_call_fsdbEvent_create_stream_begin");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "novas_call_fsdbEvent_create_stream_begin");
    }
}
void (*__vcs_pli_dummy_reference_novas_call_fsdbEvent_create_stream_begin)(int data, int reason) = novas_call_fsdbEvent_create_stream_begin;
#endif /* __VCS_PLI_STUB_novas_call_fsdbEvent_create_stream_begin */

/* PLI routine: $fsdbTrans_define_attribute:call */
#ifndef __VCS_PLI_STUB_novas_call_fsdbEvent_add_stream_attribute
#define __VCS_PLI_STUB_novas_call_fsdbEvent_add_stream_attribute
extern void novas_call_fsdbEvent_add_stream_attribute(int data, int reason);
#pragma weak novas_call_fsdbEvent_add_stream_attribute
void novas_call_fsdbEvent_add_stream_attribute(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "novas_call_fsdbEvent_add_stream_attribute");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("novas_call_fsdbEvent_add_stream_attribute");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "novas_call_fsdbEvent_add_stream_attribute");
    }
}
void (*__vcs_pli_dummy_reference_novas_call_fsdbEvent_add_stream_attribute)(int data, int reason) = novas_call_fsdbEvent_add_stream_attribute;
#endif /* __VCS_PLI_STUB_novas_call_fsdbEvent_add_stream_attribute */

/* PLI routine: $fsdbTrans_create_stream_end:call */
#ifndef __VCS_PLI_STUB_novas_call_fsdbEvent_create_stream_end
#define __VCS_PLI_STUB_novas_call_fsdbEvent_create_stream_end
extern void novas_call_fsdbEvent_create_stream_end(int data, int reason);
#pragma weak novas_call_fsdbEvent_create_stream_end
void novas_call_fsdbEvent_create_stream_end(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "novas_call_fsdbEvent_create_stream_end");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("novas_call_fsdbEvent_create_stream_end");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "novas_call_fsdbEvent_create_stream_end");
    }
}
void (*__vcs_pli_dummy_reference_novas_call_fsdbEvent_create_stream_end)(int data, int reason) = novas_call_fsdbEvent_create_stream_end;
#endif /* __VCS_PLI_STUB_novas_call_fsdbEvent_create_stream_end */

/* PLI routine: $fsdbTrans_begin:call */
#ifndef __VCS_PLI_STUB_novas_call_fsdbEvent_begin
#define __VCS_PLI_STUB_novas_call_fsdbEvent_begin
extern void novas_call_fsdbEvent_begin(int data, int reason);
#pragma weak novas_call_fsdbEvent_begin
void novas_call_fsdbEvent_begin(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "novas_call_fsdbEvent_begin");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("novas_call_fsdbEvent_begin");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "novas_call_fsdbEvent_begin");
    }
}
void (*__vcs_pli_dummy_reference_novas_call_fsdbEvent_begin)(int data, int reason) = novas_call_fsdbEvent_begin;
#endif /* __VCS_PLI_STUB_novas_call_fsdbEvent_begin */

/* PLI routine: $fsdbTrans_set_label:call */
#ifndef __VCS_PLI_STUB_novas_call_fsdbEvent_set_label
#define __VCS_PLI_STUB_novas_call_fsdbEvent_set_label
extern void novas_call_fsdbEvent_set_label(int data, int reason);
#pragma weak novas_call_fsdbEvent_set_label
void novas_call_fsdbEvent_set_label(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "novas_call_fsdbEvent_set_label");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("novas_call_fsdbEvent_set_label");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "novas_call_fsdbEvent_set_label");
    }
}
void (*__vcs_pli_dummy_reference_novas_call_fsdbEvent_set_label)(int data, int reason) = novas_call_fsdbEvent_set_label;
#endif /* __VCS_PLI_STUB_novas_call_fsdbEvent_set_label */

/* PLI routine: $fsdbTrans_add_attribute:call */
#ifndef __VCS_PLI_STUB_novas_call_fsdbEvent_add_attribute
#define __VCS_PLI_STUB_novas_call_fsdbEvent_add_attribute
extern void novas_call_fsdbEvent_add_attribute(int data, int reason);
#pragma weak novas_call_fsdbEvent_add_attribute
void novas_call_fsdbEvent_add_attribute(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "novas_call_fsdbEvent_add_attribute");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("novas_call_fsdbEvent_add_attribute");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "novas_call_fsdbEvent_add_attribute");
    }
}
void (*__vcs_pli_dummy_reference_novas_call_fsdbEvent_add_attribute)(int data, int reason) = novas_call_fsdbEvent_add_attribute;
#endif /* __VCS_PLI_STUB_novas_call_fsdbEvent_add_attribute */

/* PLI routine: $fsdbTrans_add_tag:call */
#ifndef __VCS_PLI_STUB_novas_call_fsdbEvent_add_tag
#define __VCS_PLI_STUB_novas_call_fsdbEvent_add_tag
extern void novas_call_fsdbEvent_add_tag(int data, int reason);
#pragma weak novas_call_fsdbEvent_add_tag
void novas_call_fsdbEvent_add_tag(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "novas_call_fsdbEvent_add_tag");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("novas_call_fsdbEvent_add_tag");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "novas_call_fsdbEvent_add_tag");
    }
}
void (*__vcs_pli_dummy_reference_novas_call_fsdbEvent_add_tag)(int data, int reason) = novas_call_fsdbEvent_add_tag;
#endif /* __VCS_PLI_STUB_novas_call_fsdbEvent_add_tag */

/* PLI routine: $fsdbTrans_end:call */
#ifndef __VCS_PLI_STUB_novas_call_fsdbEvent_end
#define __VCS_PLI_STUB_novas_call_fsdbEvent_end
extern void novas_call_fsdbEvent_end(int data, int reason);
#pragma weak novas_call_fsdbEvent_end
void novas_call_fsdbEvent_end(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "novas_call_fsdbEvent_end");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("novas_call_fsdbEvent_end");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "novas_call_fsdbEvent_end");
    }
}
void (*__vcs_pli_dummy_reference_novas_call_fsdbEvent_end)(int data, int reason) = novas_call_fsdbEvent_end;
#endif /* __VCS_PLI_STUB_novas_call_fsdbEvent_end */

/* PLI routine: $fsdbTrans_add_relation:call */
#ifndef __VCS_PLI_STUB_novas_call_fsdbEvent_add_relation
#define __VCS_PLI_STUB_novas_call_fsdbEvent_add_relation
extern void novas_call_fsdbEvent_add_relation(int data, int reason);
#pragma weak novas_call_fsdbEvent_add_relation
void novas_call_fsdbEvent_add_relation(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "novas_call_fsdbEvent_add_relation");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("novas_call_fsdbEvent_add_relation");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "novas_call_fsdbEvent_add_relation");
    }
}
void (*__vcs_pli_dummy_reference_novas_call_fsdbEvent_add_relation)(int data, int reason) = novas_call_fsdbEvent_add_relation;
#endif /* __VCS_PLI_STUB_novas_call_fsdbEvent_add_relation */

/* PLI routine: $fsdbTrans_get_error_code:call */
#ifndef __VCS_PLI_STUB_novas_call_fsdbEvent_get_error_code
#define __VCS_PLI_STUB_novas_call_fsdbEvent_get_error_code
extern void novas_call_fsdbEvent_get_error_code(int data, int reason);
#pragma weak novas_call_fsdbEvent_get_error_code
void novas_call_fsdbEvent_get_error_code(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "novas_call_fsdbEvent_get_error_code");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("novas_call_fsdbEvent_get_error_code");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "novas_call_fsdbEvent_get_error_code");
    }
}
void (*__vcs_pli_dummy_reference_novas_call_fsdbEvent_get_error_code)(int data, int reason) = novas_call_fsdbEvent_get_error_code;
#endif /* __VCS_PLI_STUB_novas_call_fsdbEvent_get_error_code */

/* PLI routine: $fsdbTrans_add_stream_attribute:call */
#ifndef __VCS_PLI_STUB_novas_call_fsdbTrans_add_stream_attribute
#define __VCS_PLI_STUB_novas_call_fsdbTrans_add_stream_attribute
extern void novas_call_fsdbTrans_add_stream_attribute(int data, int reason);
#pragma weak novas_call_fsdbTrans_add_stream_attribute
void novas_call_fsdbTrans_add_stream_attribute(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "novas_call_fsdbTrans_add_stream_attribute");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("novas_call_fsdbTrans_add_stream_attribute");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "novas_call_fsdbTrans_add_stream_attribute");
    }
}
void (*__vcs_pli_dummy_reference_novas_call_fsdbTrans_add_stream_attribute)(int data, int reason) = novas_call_fsdbTrans_add_stream_attribute;
#endif /* __VCS_PLI_STUB_novas_call_fsdbTrans_add_stream_attribute */

/* PLI routine: $fsdbTrans_add_scope_attribute:call */
#ifndef __VCS_PLI_STUB_novas_call_fsdbTrans_add_scope_attribute
#define __VCS_PLI_STUB_novas_call_fsdbTrans_add_scope_attribute
extern void novas_call_fsdbTrans_add_scope_attribute(int data, int reason);
#pragma weak novas_call_fsdbTrans_add_scope_attribute
void novas_call_fsdbTrans_add_scope_attribute(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "novas_call_fsdbTrans_add_scope_attribute");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("novas_call_fsdbTrans_add_scope_attribute");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "novas_call_fsdbTrans_add_scope_attribute");
    }
}
void (*__vcs_pli_dummy_reference_novas_call_fsdbTrans_add_scope_attribute)(int data, int reason) = novas_call_fsdbTrans_add_scope_attribute;
#endif /* __VCS_PLI_STUB_novas_call_fsdbTrans_add_scope_attribute */

/* PLI routine: $sps_interactive:call */
#ifndef __VCS_PLI_STUB_novas_call_sps_interactive
#define __VCS_PLI_STUB_novas_call_sps_interactive
extern void novas_call_sps_interactive(int data, int reason);
#pragma weak novas_call_sps_interactive
void novas_call_sps_interactive(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "novas_call_sps_interactive");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("novas_call_sps_interactive");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "novas_call_sps_interactive");
    }
}
void (*__vcs_pli_dummy_reference_novas_call_sps_interactive)(int data, int reason) = novas_call_sps_interactive;
#endif /* __VCS_PLI_STUB_novas_call_sps_interactive */

/* PLI routine: $sps_test:call */
#ifndef __VCS_PLI_STUB_novas_call_sps_test
#define __VCS_PLI_STUB_novas_call_sps_test
extern void novas_call_sps_test(int data, int reason);
#pragma weak novas_call_sps_test
void novas_call_sps_test(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "novas_call_sps_test");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("novas_call_sps_test");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "novas_call_sps_test");
    }
}
void (*__vcs_pli_dummy_reference_novas_call_sps_test)(int data, int reason) = novas_call_sps_test;
#endif /* __VCS_PLI_STUB_novas_call_sps_test */

/* PLI routine: $fsdbDumpClassObject:call */
#ifndef __VCS_PLI_STUB_novas_call_fsdbDumpClassObject
#define __VCS_PLI_STUB_novas_call_fsdbDumpClassObject
extern void novas_call_fsdbDumpClassObject(int data, int reason);
#pragma weak novas_call_fsdbDumpClassObject
void novas_call_fsdbDumpClassObject(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "novas_call_fsdbDumpClassObject");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("novas_call_fsdbDumpClassObject");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "novas_call_fsdbDumpClassObject");
    }
}
void (*__vcs_pli_dummy_reference_novas_call_fsdbDumpClassObject)(int data, int reason) = novas_call_fsdbDumpClassObject;
#endif /* __VCS_PLI_STUB_novas_call_fsdbDumpClassObject */

/* PLI routine: $fsdbDumpClassObjectByFile:call */
#ifndef __VCS_PLI_STUB_novas_call_fsdbDumpClassObjectByFile
#define __VCS_PLI_STUB_novas_call_fsdbDumpClassObjectByFile
extern void novas_call_fsdbDumpClassObjectByFile(int data, int reason);
#pragma weak novas_call_fsdbDumpClassObjectByFile
void novas_call_fsdbDumpClassObjectByFile(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "novas_call_fsdbDumpClassObjectByFile");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("novas_call_fsdbDumpClassObjectByFile");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "novas_call_fsdbDumpClassObjectByFile");
    }
}
void (*__vcs_pli_dummy_reference_novas_call_fsdbDumpClassObjectByFile)(int data, int reason) = novas_call_fsdbDumpClassObjectByFile;
#endif /* __VCS_PLI_STUB_novas_call_fsdbDumpClassObjectByFile */

/* PLI routine: $ridbDump:call */
#ifndef __VCS_PLI_STUB_novas_call_ridbDump
#define __VCS_PLI_STUB_novas_call_ridbDump
extern void novas_call_ridbDump(int data, int reason);
#pragma weak novas_call_ridbDump
void novas_call_ridbDump(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "novas_call_ridbDump");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("novas_call_ridbDump");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "novas_call_ridbDump");
    }
}
void (*__vcs_pli_dummy_reference_novas_call_ridbDump)(int data, int reason) = novas_call_ridbDump;
#endif /* __VCS_PLI_STUB_novas_call_ridbDump */

/* PLI routine: $sps_flush_file:call */
#ifndef __VCS_PLI_STUB_novas_call_sps_flush_file
#define __VCS_PLI_STUB_novas_call_sps_flush_file
extern void novas_call_sps_flush_file(int data, int reason);
#pragma weak novas_call_sps_flush_file
void novas_call_sps_flush_file(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "novas_call_sps_flush_file");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("novas_call_sps_flush_file");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "novas_call_sps_flush_file");
    }
}
void (*__vcs_pli_dummy_reference_novas_call_sps_flush_file)(int data, int reason) = novas_call_sps_flush_file;
#endif /* __VCS_PLI_STUB_novas_call_sps_flush_file */

/* PLI routine: $fsdbDumpSingle:call */
#ifndef __VCS_PLI_STUB_novas_call_fsdbDumpSingle
#define __VCS_PLI_STUB_novas_call_fsdbDumpSingle
extern void novas_call_fsdbDumpSingle(int data, int reason);
#pragma weak novas_call_fsdbDumpSingle
void novas_call_fsdbDumpSingle(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "novas_call_fsdbDumpSingle");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("novas_call_fsdbDumpSingle");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "novas_call_fsdbDumpSingle");
    }
}
void (*__vcs_pli_dummy_reference_novas_call_fsdbDumpSingle)(int data, int reason) = novas_call_fsdbDumpSingle;
#endif /* __VCS_PLI_STUB_novas_call_fsdbDumpSingle */

/* PLI routine: $fsdbDumpIO:call */
#ifndef __VCS_PLI_STUB_novas_call_fsdbDumpIO
#define __VCS_PLI_STUB_novas_call_fsdbDumpIO
extern void novas_call_fsdbDumpIO(int data, int reason);
#pragma weak novas_call_fsdbDumpIO
void novas_call_fsdbDumpIO(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "novas_call_fsdbDumpIO");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("novas_call_fsdbDumpIO");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "novas_call_fsdbDumpIO");
    }
}
void (*__vcs_pli_dummy_reference_novas_call_fsdbDumpIO)(int data, int reason) = novas_call_fsdbDumpIO;
#endif /* __VCS_PLI_STUB_novas_call_fsdbDumpIO */

#ifdef __cplusplus
}
#endif
