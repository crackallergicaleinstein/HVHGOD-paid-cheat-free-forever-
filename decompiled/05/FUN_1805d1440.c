// FUN_1805d1440 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805d1440 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1805d1440(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,int param_6,undefined4 param_7)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  undefined1 auStack_368 [32];
  int local_348;
  int local_340;
  int local_338;
  undefined4 local_334;
  undefined4 local_330;
  undefined4 local_32c;
  undefined4 local_328;
  undefined4 local_324;
  undefined4 local_320;
  undefined4 local_31c;
  ulonglong local_28;
  
  local_28 = DAT_1808d5f00 ^ (ulonglong)auStack_368;
  piVar10 = &local_338;
  local_320 = *(undefined4 *)(param_1 + 0x40);
  local_31c = *(undefined4 *)(param_1 + 0x44);
  local_32c = param_5;
  local_334 = param_7;
  local_328 = param_2;
  local_324 = param_3;
  local_330 = param_4;
  local_338 = param_6;
  do {
    while( true ) {
      uVar2 = piVar10[7];
      uVar3 = piVar10[1];
      iVar12 = piVar10[5];
      iVar4 = piVar10[3];
      uVar8 = -*(int *)(param_1 + 4);
      uVar6 = uVar2;
      if ((int)uVar3 < (int)uVar2) {
        uVar6 = uVar3;
      }
      iVar7 = iVar12;
      if (iVar4 < iVar12) {
        iVar7 = iVar4;
      }
      if ((int)(uVar6 & uVar8) <= iVar7) break;
LAB_1805d15eb:
      iVar11 = *piVar10 + piVar10[2];
      piVar10[0xc] = piVar10[6];
      iVar1 = piVar10[4] + piVar10[2];
      piVar10[0xd] = uVar2;
      iVar7 = piVar10[4] + piVar10[6];
      iVar9 = iVar7 + iVar1;
      iVar1 = iVar1 + iVar11;
      piVar10[10] = iVar7 >> 1;
      param_6 = iVar1 + iVar9 >> 3;
      piVar10[8] = iVar9 >> 2;
      piVar10[2] = iVar11 >> 1;
      piVar10[4] = iVar1 >> 2;
      iVar9 = iVar12 + uVar2 + iVar4 + iVar12;
      piVar10[6] = param_6;
      iVar7 = iVar4 + iVar12 + iVar4 + uVar3;
      piVar10[0xb] = (int)(iVar12 + uVar2) >> 1;
      piVar10[9] = iVar9 >> 2;
      piVar10[3] = (int)(iVar4 + uVar3) >> 1;
      piVar10[5] = iVar7 >> 2;
      piVar10[7] = iVar7 + iVar9 >> 3;
      piVar10 = piVar10 + 6;
    }
    uVar6 = uVar3;
    if ((int)uVar3 < (int)uVar2) {
      uVar6 = uVar2;
    }
    iVar7 = iVar4;
    if (iVar4 < iVar12) {
      iVar7 = iVar12;
    }
    if ((int)((uVar6 - 1) + *(int *)(param_1 + 4) & uVar8) < iVar7) goto LAB_1805d15eb;
    if (uVar2 != uVar3) {
      iVar12 = ((int)uVar3 <= (int)uVar2) + 1;
      if ((*(int *)(param_1 + 0x70) != iVar12) &&
         (((*(int *)(param_1 + 0x70) != 0 && (cVar5 = FUN_1805d1dc0(param_1), cVar5 != '\0')) ||
          (cVar5 = FUN_1805d2340(param_1,iVar12), cVar5 != '\0')))) {
      }
      iVar12 = *(int *)(param_1 + 0x4c);
      local_348 = *(int *)(param_1 + 0x48);
      if ((int)uVar2 < (int)uVar3) {
        local_340 = iVar12;
        cVar5 = FUN_1805d10d0(param_1,3,piVar10,FUN_1805d2840);
      }
      else {
        local_340 = -local_348;
        piVar10[1] = -piVar10[1];
        local_348 = -iVar12;
        piVar10[3] = -piVar10[3];
        piVar10[5] = -piVar10[5];
        piVar10[7] = -piVar10[7];
        cVar5 = FUN_1805d10d0(param_1,3,piVar10,FUN_1805d2840);
        piVar10[1] = -piVar10[1];
      }
      if (cVar5 != '\0') {
      }
    }
    *(int *)(param_1 + 0x40) = param_6;
    *(uint *)(param_1 + 0x44) = uVar3;
    if (piVar10 == &local_338) {
    }
    param_6 = piVar10[-6];
    piVar10 = piVar10 + -6;
  } while( true );
}



