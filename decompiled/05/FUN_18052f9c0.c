// FUN_18052f9c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18052f9c0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_18052f9c0(float *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined *puVar5;
  float local_res8;
  float local_resc;
  
  local_res8 = *param_1 - DAT_180b0a41c * 400.0;
  local_resc = param_1[1] - DAT_180b0a41c * 90.0;
  FUN_18052ef00(&local_res8);
  puVar5 = &DAT_180cd1850;
  if (*(int *)(*(longlong *)(*DAT_180c62f50 + (longlong)(int)DAT_180c62f50[3] * 8) + 0x2e8) != 0) {
    puVar5 = &DAT_180cd2930;
  }
  if (*(longlong *)(puVar5 + 0x10a0) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(puVar5 + 0x10a0) + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  lVar3 = DAT_180c63000;
  DAT_180c62ff8 = *(undefined8 *)(puVar5 + 0x1098);
  lVar4 = *(longlong *)(puVar5 + 0x10a0);
  if (DAT_180c63000 != 0) {
    LOCK();
    piVar1 = (int *)(DAT_180c63000 + 8);
    iVar2 = *piVar1;
    DAT_180c63000 = *(longlong *)(puVar5 + 0x10a0);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)**(undefined8 **)lVar3)(lVar3);
      LOCK();
      piVar1 = (int *)(lVar3 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*(longlong *)lVar3 + 8))(lVar3);
      }
    }
    lVar4 = DAT_180c63000;
  }
  DAT_180c63000 = lVar4;
  FUN_1803c3340(puVar5);
  return;
}



