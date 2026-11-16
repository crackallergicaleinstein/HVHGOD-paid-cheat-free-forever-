// FUN_180586830 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180586830 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180586830(longlong param_1,longlong param_2,longlong *param_3)

{
  short sVar1;
  short sVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  undefined1 auStack_78 [32];
  int local_58;
  int local_54;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_1808d5f00 ^ (ulonglong)auStack_78;
  lVar3 = *(longlong *)(param_2 + 0x78);
  lVar9 = *(longlong *)(*(longlong *)(param_2 + 0x80) + 0x38);
  lVar4 = *(longlong *)(param_1 + 8);
  local_54 = 0;
  local_58 = 0;
  sVar1 = *(short *)(lVar9 + 0xc);
  sVar2 = *(short *)(lVar4 + 0x2d8);
  iVar10 = (uint)*(ushort *)(param_2 + 0x68) * 0x10000;
  local_50 = 0x10000;
  uStack_48 = 0x1000000000000;
  if (*(ushort *)(param_2 + 0x68) == 0) {
  }
  if (*(code **)((&PTR_DAT_18066c5f0)[*(int *)(*param_3 + 4)] + 0x28) == (code *)0x0) {
  }
  (**(code **)((&PTR_DAT_18066c5f0)[*(int *)(*param_3 + 4)] + 0x28))(param_3,&local_58,&local_54);
  if ((sVar1 == sVar2) && ((local_54 < 1 || (local_54 == *(int *)(lVar4 + 0x2dc))))) {
LAB_180586947:
    if ((local_58 < 1) || (local_58 == *(int *)(lVar4 + 0x2e0))) goto LAB_1805869ca;
  }
  else {
    iVar5 = FUN_1805865f0(param_1,param_2);
    lVar8 = (longlong)*(int *)(lVar9 + 0x10) * (longlong)iVar5;
    *(int *)(lVar4 + 0x2dc) = local_54;
    *(undefined2 *)(lVar4 + 0x2d8) = *(undefined2 *)(lVar9 + 0xc);
    *(int *)(lVar4 + 0x2e4) =
         (int)(short)((uint)((int)((ulonglong)((lVar8 >> 0x3f) + 0x8000 + lVar8) >> 0x10) + 0x8000)
                     >> 0x10);
    if (sVar1 == sVar2) goto LAB_180586947;
  }
  iVar6 = FUN_1805865f0(param_1,param_2,local_58);
  iVar5 = *(int *)(lVar9 + 0x14);
  *(int *)(lVar4 + 0x2e0) = local_58;
  *(undefined2 *)(lVar4 + 0x2d8) = *(undefined2 *)(lVar9 + 0xc);
  lVar9 = (longlong)iVar5 * (longlong)iVar6;
  *(int *)(lVar4 + 0x2e8) =
       (int)(short)((uint)((int)((ulonglong)((lVar9 >> 0x3f) + 0x8000 + lVar9) >> 0x10) + 0x8000) >>
                   0x10);
  uVar7 = FUN_180573310((iVar10 - iVar6) + -0x80000,iVar10);
  *(undefined4 *)(lVar4 + 0x2ec) = uVar7;
LAB_1805869ca:
  FUN_180575e10(lVar3 + 0x98,*(undefined4 *)(lVar4 + 0x2e4),*(undefined4 *)(lVar4 + 0x2e8));
  uStack_48 = CONCAT44(*(undefined4 *)(lVar4 + 0x2ec),(undefined4)uStack_48);
  FUN_1805765a0(lVar3 + 0x98,&local_50);
}



