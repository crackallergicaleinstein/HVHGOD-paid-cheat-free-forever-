// FUN_180605a14 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180605a14 */

/* Library Function - Single Match
    public: static void __cdecl __FrameHandler3::FrameUnwindToEmptyState(unsigned __int64 *
   __ptr64,struct _xDISPATCHER_CONTEXT * __ptr64,struct _s_FuncInfo const * __ptr64)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl
__FrameHandler3::FrameUnwindToEmptyState
          (__uint64 *param_1,_xDISPATCHER_CONTEXT *param_2,_s_FuncInfo *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  uVar1 = FUN_180605aac();
  uVar2 = FUN_18060712c(param_3,param_2);
  lVar3 = FUN_180605850(param_3,uVar2);
  if (lVar3 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = *(undefined4 *)(lVar3 + 4);
  }
  FUN_1806098c0(uVar1,param_2,param_3,uVar2);
  return;
}



