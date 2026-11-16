// FUN_1800ce320 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800ce320 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800ce320(longlong param_1,int param_2,undefined8 *param_3)

{
  PSRWLOCK SRWLock;
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [16];
  undefined8 local_88 [4];
  undefined1 local_68 [32];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_1808d5f00 ^ (ulonglong)auStack_b8;
  SRWLock = (PSRWLOCK)(param_1 + 0x18);
  local_98._8_8_ = 0;
  local_98._0_8_ = SRWLock;
  local_48 = param_3;
  AcquireSRWLockExclusive(SRWLock);
  local_98[8] = 1;
  if (param_2 == 0) {
    FUN_18015b360(local_88,param_3);
    FUN_18015b360(local_68,param_3);
    puVar6 = (undefined8 *)(param_1 + 0x20);
    lVar2 = -(longlong)puVar6;
    lVar8 = (longlong)local_88 - (longlong)puVar6;
    lVar7 = 2;
    do {
      puVar1 = (undefined8 *)(lVar8 + (longlong)puVar6);
      if (puVar6 != puVar1) {
        FUN_18015c010(puVar6);
        uVar3 = puVar1[1];
        uVar4 = puVar1[2];
        uVar5 = puVar1[3];
        *puVar6 = *puVar1;
        puVar6[1] = uVar3;
        puVar6[2] = uVar4;
        puVar6[3] = uVar5;
        *(undefined8 *)((longlong)local_88 + lVar2 + 0x10 + (longlong)puVar6) = 0;
        *(undefined8 *)((longlong)local_88 + lVar2 + 0x18 + (longlong)puVar6) = 0xf;
        *(undefined1 *)puVar1 = 0;
      }
      puVar6 = puVar6 + 4;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    _eh_vector_destructor_iterator_(local_88,0x20,2,thunk_FUN_18015c010);
  }
  else if ((param_2 - 2U < 2) &&
          (puVar6 = (undefined8 *)((longlong)param_2 * 0x20 + -0x20 + param_1), puVar6 != param_3))
  {
    FUN_18015c010(puVar6);
    uVar3 = param_3[1];
    uVar4 = param_3[2];
    uVar5 = param_3[3];
    *puVar6 = *param_3;
    puVar6[1] = uVar3;
    puVar6[2] = uVar4;
    puVar6[3] = uVar5;
    param_3[2] = 0;
    param_3[3] = 0xf;
    *(undefined1 *)param_3 = 0;
  }
  ReleaseSRWLockExclusive(SRWLock);
  FUN_18015c010(param_3);
}



