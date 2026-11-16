// FUN_18003adf0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18003adf0 */

void FUN_18003adf0(longlong *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong *_Buf1;
  longlong lVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_180bacc60);
  uVar1 = DAT_1808d4058;
  puVar3 = DAT_1808d4040;
  puVar6 = &DAT_1808d4040;
  if (0xf < DAT_1808d4058) {
    puVar6 = DAT_1808d4040;
  }
  _Buf1 = param_1;
  if (0xf < (ulonglong)param_1[3]) {
    _Buf1 = (longlong *)*param_1;
  }
  if (param_1[2] == DAT_1808d4050) {
    if (DAT_1808d4050 != 0) {
      iVar4 = memcmp(_Buf1,puVar6,DAT_1808d4050);
      if (iVar4 != 0) goto LAB_18003ae5b;
    }
  }
  else {
LAB_18003ae5b:
    if ((undefined8 **)param_1 != &DAT_1808d4040) {
      if (0xf < uVar1) {
        uVar7 = uVar1 + 1;
        puVar6 = puVar3;
        if (0xfff < uVar7) {
          puVar6 = (undefined8 *)puVar3[-1];
          if (0x1f < (ulonglong)((longlong)puVar3 + (-8 - (longlong)puVar6))) goto LAB_18003af3f;
          uVar7 = uVar1 + 0x28;
        }
        FUN_1804547d0(puVar6,uVar7);
      }
      DAT_1808d4040 = (undefined8 *)*param_1;
      lRam00000001808d4048 = param_1[1];
      DAT_1808d4050 = param_1[2];
      DAT_1808d4058 = param_1[3];
      param_1[2] = 0;
      param_1[3] = 0xf;
      *(undefined1 *)param_1 = 0;
    }
    DAT_180bacca0 = DAT_180bacca0 + 1;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_180bacc60);
  uVar1 = param_1[3];
  if (uVar1 < 0x10) {
    return;
  }
  lVar2 = *param_1;
  uVar7 = uVar1 + 1;
  lVar5 = lVar2;
  if (0xfff < uVar7) {
    lVar5 = *(longlong *)(lVar2 + -8);
    if (0x1f < (ulonglong)((lVar2 + -8) - lVar5)) {
LAB_18003af3f:
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    uVar7 = uVar1 + 0x28;
  }
  FUN_1804547d0(lVar5,uVar7);
  return;
}



