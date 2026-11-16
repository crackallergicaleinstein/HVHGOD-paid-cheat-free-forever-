// FUN_18003af60 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18003af60 */

undefined8 FUN_18003af60(undefined8 *param_1)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  AcquireSRWLockShared((PSRWLOCK)&DAT_180bacc60);
  uVar1 = DAT_1808d4050;
  if ((undefined8 **)param_1 != &DAT_1808d4040) {
    puVar3 = &DAT_1808d4040;
    if (0xf < DAT_1808d4058) {
      puVar3 = DAT_1808d4040;
    }
    if ((ulonglong)param_1[3] < DAT_1808d4050) {
      FUN_180049120(param_1,DAT_1808d4050);
    }
    else {
      puVar2 = param_1;
      if (0xf < (ulonglong)param_1[3]) {
        puVar2 = (undefined8 *)*param_1;
      }
      param_1[2] = DAT_1808d4050;
      FUN_18063aed0(puVar2,puVar3,uVar1,puVar3,uVar4);
      *(undefined1 *)((longlong)puVar2 + uVar1) = 0;
    }
  }
  uVar4 = DAT_180bacca0;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_180bacc60);
  return uVar4;
}



