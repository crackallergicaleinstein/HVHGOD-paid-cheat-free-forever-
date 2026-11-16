// FUN_1805fd360 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805fd360 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1805fd360(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  DWORD dwExceptionFlags;
  DWORD nNumberOfArguments;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  DWORD dwExceptionCode;
  undefined *puStack_100;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [32];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  ULONG_PTR local_98;
  undefined1 *puStack_90;
  longlong local_88;
  longlong lStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 uStack_28;
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)local_d8;
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 == (undefined8 *)0x0) {
    puStack_100 = (undefined *)0x1805fd397;
    FUN_1805fc994(local_d8);
                    /* WARNING: Subroutine does not return */
    puStack_100 = &UNK_1805fd3a7;
    FUN_180606630(local_d8,&DAT_1808d0cc0);
  }
  local_b8 = *puVar1;
  uStack_b0 = puVar1[1];
  local_a8 = puVar1[2];
  uStack_a0 = puVar1[3];
  local_98 = puVar1[4];
  puStack_90 = (undefined1 *)puVar1[5];
  local_88 = puVar1[6];
  lStack_80 = puVar1[7];
  local_78 = puVar1[8];
  uStack_70 = puVar1[9];
  local_68 = puVar1[10];
  uStack_60 = puVar1[0xb];
  local_58 = puVar1[0xc];
  uStack_50 = puVar1[0xd];
  uStack_48 = *(undefined4 *)(puVar1 + 0xe);
  uStack_44 = *(undefined4 *)((longlong)puVar1 + 0x74);
  uStack_40 = *(undefined4 *)(puVar1 + 0xf);
  uStack_3c = *(undefined4 *)((longlong)puVar1 + 0x7c);
  uStack_38 = *(undefined4 *)(puVar1 + 0x10);
  uStack_34 = *(undefined4 *)((longlong)puVar1 + 0x84);
  uStack_30 = *(undefined4 *)(puVar1 + 0x11);
  uStack_2c = *(undefined4 *)((longlong)puVar1 + 0x8c);
  uStack_28 = puVar1[0x12];
  puVar5 = auStack_f8;
  dwExceptionCode = (DWORD)local_b8;
  if ((((DWORD)local_b8 != 0xe06d7363) || (puVar5 = auStack_f8, (DWORD)uStack_a0 != 4)) ||
     ((2 < (int)local_98 + 0xe66cfae0U && (puVar5 = auStack_f8, (int)local_98 != 0x1994000)))) {
LAB_1805fd4aa:
    nNumberOfArguments = (DWORD)uStack_a0;
    dwExceptionFlags = local_b8._4_4_;
    *(undefined8 *)(puVar5 + -8) = 0x1805fd4be;
    RaiseException(dwExceptionCode,dwExceptionFlags,nNumberOfArguments,&local_98);
    *(undefined **)(puVar5 + -8) = &UNK_1805fd4cd;
  }
  if (((puStack_90 != (undefined1 *)0x0) && (local_88 != 0)) && (*(int *)(local_88 + 0xc) != 0)) {
    if (0 < *(int *)(*(int *)(local_88 + 0xc) + lStack_80)) {
      uVar3 = (ulonglong)
              *(int *)(*(int *)((longlong)*(int *)(local_88 + 0xc) + 4 + lStack_80) + lStack_80 +
                      0x14);
      uVar4 = uVar3 + 0xf;
      if (uVar4 <= uVar3) {
        uVar4 = 0xffffffffffffff0;
      }
      puStack_100 = (undefined *)0x1805fd492;
      lVar2 = -(uVar4 & 0xfffffffffffffff0);
      *(undefined8 *)(auStack_f8 + lVar2 + -8) = 0x1805fd4a2;
      FUN_1805fd0ac(local_d8 + lVar2);
      puVar5 = auStack_f8 + lVar2;
      dwExceptionCode = (DWORD)local_b8;
      puStack_90 = local_d8 + lVar2;
      goto LAB_1805fd4aa;
    }
  }
                    /* WARNING: Subroutine does not return */
  puStack_100 = &UNK_1805fd4e2;
  abort();
}



