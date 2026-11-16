// FUN_1805f73f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805f73f0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001805f7527) */
/* WARNING: Removing unreachable block (ram,0x0001805f752a) */
/* WARNING: Removing unreachable block (ram,0x0001805f7596) */
/* WARNING: Removing unreachable block (ram,0x0001805f7599) */

void FUN_1805f73f0(undefined1 (*param_1) [16],ulonglong param_2,undefined1 (*param_3) [16],
                  ulonglong param_4)

{
  undefined1 auVar1 [16];
  int iVar2;
  uint uVar3;
  undefined1 (*pauVar4) [16];
  uint uVar5;
  uint uVar6;
  undefined1 (*pauVar7) [16];
  int iVar8;
  uint uVar9;
  undefined1 (*pauVar10) [16];
  bool bVar11;
  undefined1 uVar12;
  undefined8 uVar13;
  undefined1 auStack_88 [32];
  undefined1 local_68 [16];
  ulonglong local_58;
  
  local_58 = DAT_1808d5f00 ^ (ulonglong)auStack_88;
  pauVar10 = (undefined1 (*) [16])(*param_1 + (param_2 & 0xfffffffffffffff0));
  uVar5 = (uint)param_4;
  if (param_4 < 0x11) {
    uVar13 = FUN_18063aed0(local_68,param_3,param_4);
    auVar1 = local_68;
    for (; param_1 != pauVar10; param_1 = param_1 + 1) {
      uVar13 = SUB168(*param_1,0);
      pcmpestri(local_68,*param_1,0,uVar5,0x10);
      if (param_1 < pauVar10) {
      }
    }
    uVar9 = (uint)param_2 & 0xf;
    if ((param_2 & 0xf) != 0) {
      FUN_18063aed0(uVar13,param_1,uVar9);
      pcmpestri(auVar1,local_68,0,uVar5,uVar9);
    }
  }
  else {
    uVar5 = uVar5 & 0xf;
    pauVar4 = (undefined1 (*) [16])(*param_3 + (param_4 & 0xfffffffffffffff0));
    FUN_18063aed0(local_68,pauVar4,uVar5);
    auVar1 = local_68;
    iVar8 = 0x10;
    for (; param_1 != pauVar10; param_1 = param_1 + 1) {
      bVar11 = param_1 < pauVar10;
      pauVar7 = param_3;
      do {
        iVar2 = pcmpestri(*pauVar7,*param_1,0,0x10,0x10);
        if ((bVar11) && (iVar2 < iVar8)) {
          iVar8 = iVar2;
        }
        pauVar7 = pauVar7 + 1;
        bVar11 = pauVar7 < pauVar4;
      } while (pauVar7 != pauVar4);
      if ((param_4 & 0xf) != 0) {
        pcmpestri(local_68,*param_1,0,uVar5,0x10);
      }
      if (iVar8 != 0x10) {
      }
    }
    uVar12 = 0;
    uVar9 = (uint)param_2 & 0xf;
    if ((param_2 & 0xf) != 0) {
      FUN_18063aed0(local_68,param_1,uVar9);
      uVar6 = uVar9;
      do {
        uVar3 = pcmpestri(*param_3,local_68,0,0x10,uVar9);
        if (((bool)uVar12) && ((int)uVar3 < (int)uVar6)) {
          uVar6 = uVar3;
        }
        param_3 = param_3 + 1;
        uVar12 = param_3 < pauVar4;
      } while (param_3 != pauVar4);
      if ((param_4 & 0xf) != 0) {
        pcmpestri(auVar1,local_68,0,uVar5,uVar9);
      }
    }
  }
}



