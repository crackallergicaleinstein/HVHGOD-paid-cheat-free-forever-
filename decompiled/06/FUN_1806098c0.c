// FUN_1806098c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1806098c0 */

void FUN_1806098c0(__uint64 *param_1,undefined8 param_2,_s_FuncInfo *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  uVar3 = FUN_180606310();
  iVar2 = FUN_180607090(param_1,param_2,param_3);
  lVar4 = FUN_180606ee8();
  *(int *)(lVar4 + 0x30) = *(int *)(lVar4 + 0x30) + 1;
  while ((iVar2 != -1 && (param_4 < iVar2))) {
    if ((iVar2 < 0) || (param_3->maxState <= iVar2)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar4 = FUN_180606310();
    lVar5 = (longlong)iVar2 * 8;
    iVar2 = *(int *)((int)param_3->dispUnwindMap + lVar5 + lVar4);
    iVar1 = param_3->dispUnwindMap;
    lVar4 = FUN_180606310();
    if (*(int *)(lVar4 + lVar5 + 4 + (longlong)iVar1) == 0) {
      lVar4 = 0;
    }
    else {
      iVar1 = param_3->dispUnwindMap;
      lVar4 = FUN_180606310();
      iVar1 = *(int *)(lVar4 + lVar5 + 4 + (longlong)iVar1);
      lVar4 = FUN_180606310();
      lVar4 = lVar4 + iVar1;
    }
    if (lVar4 != 0) {
      __FrameHandler3::SetState(param_1,param_3,iVar2);
      iVar1 = param_3->dispUnwindMap;
      lVar4 = FUN_180606310();
      if (*(int *)(lVar4 + lVar5 + 4 + (longlong)iVar1) == 0) {
        lVar4 = 0;
      }
      else {
        iVar1 = param_3->dispUnwindMap;
        lVar4 = FUN_180606310();
        iVar1 = *(int *)(lVar4 + lVar5 + 4 + (longlong)iVar1);
        lVar4 = FUN_180606310();
        lVar4 = lVar4 + iVar1;
      }
      _CallSettingFrame(lVar4,param_1,0x103);
      FUN_180606338(uVar3);
    }
  }
  lVar4 = FUN_180606ee8();
  if (0 < *(int *)(lVar4 + 0x30)) {
    lVar4 = FUN_180606ee8();
    *(int *)(lVar4 + 0x30) = *(int *)(lVar4 + 0x30) + -1;
  }
  if ((iVar2 != -1) && (param_4 < iVar2)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  __FrameHandler3::SetState(param_1,param_3,iVar2);
  return;
}



