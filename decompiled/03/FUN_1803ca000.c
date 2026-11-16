// FUN_1803ca000 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803ca000 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1803ca000(undefined1 (*param_1) [16],undefined8 ****param_2,float param_3)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  bool bVar3;
  bool bVar4;
  longlong lVar5;
  undefined8 ****ppppuVar6;
  undefined8 ***pppuVar7;
  ulonglong uVar8;
  longlong lVar9;
  float fVar10;
  undefined1 auVar11 [64];
  undefined1 auStack_f8 [32];
  undefined8 ***local_d8;
  undefined *local_d0;
  undefined8 local_c8;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 ****local_98;
  longlong local_90;
  undefined8 ****local_88 [3];
  ulonglong local_70;
  undefined8 ****local_68;
  ulonglong local_60;
  
  local_60 = DAT_1808d5f00 ^ (ulonglong)auStack_f8;
  bVar3 = false;
  local_a8 = 0;
  ppppuVar6 = param_2;
  if ((undefined8 ***)0xf < param_2[3]) {
    ppppuVar6 = (undefined8 ****)*param_2;
  }
  lVar5 = -1;
  do {
    lVar5 = lVar5 + 1;
  } while (*(char *)((longlong)ppppuVar6 + lVar5) != '\0');
  if (DAT_180bbadc8 == DAT_180bbadd0) {
    lVar9 = DAT_180bbade0;
  }
  else {
    lVar9 = *(longlong *)(DAT_180bbadd0 + -8);
  }
  auVar11 = ZEXT864(0);
  local_b0 = param_1;
  local_68 = param_2;
  if (lVar9 == 0) {
    fVar10 = 0.0;
  }
  else {
    local_98 = ppppuVar6;
    local_90 = lVar5;
    FUN_180430010(lVar9,&local_b0,&local_98);
    fVar10 = (float)local_b0;
  }
  if (param_3 < fVar10) {
LAB_1803ca110:
    pppuVar7 = param_2[2];
    if (pppuVar7 == (undefined8 ***)0x0) {
LAB_1803ca1ea:
      bVar4 = false;
    }
    else {
      if (0x7fffffffffffffffU - (longlong)pppuVar7 < 3) {
                    /* WARNING: Subroutine does not return */
        FUN_18015bb70();
      }
      local_c8 = 3;
      local_d0 = &DAT_1807d3edc;
      local_d8 = pppuVar7;
      FUN_18015a9c0(local_88);
      bVar3 = true;
      local_a8 = 6;
      ppppuVar6 = local_88;
      if (0xf < local_70) {
        ppppuVar6 = local_88[0];
      }
      lVar5 = -1;
      do {
        lVar5 = lVar5 + 1;
      } while (*(char *)((longlong)ppppuVar6 + lVar5) != '\0');
      if (DAT_180bbadc8 == DAT_180bbadd0) {
        lVar9 = DAT_180bbade0;
      }
      else {
        lVar9 = *(longlong *)(DAT_180bbadd0 + -8);
      }
      if (lVar9 == 0) {
        fVar10 = auVar11._0_4_;
        local_b0 = (undefined1 (*) [16])CONCAT44(fVar10,fVar10);
      }
      else {
        local_98 = ppppuVar6;
        local_90 = lVar5;
        FUN_180430010(lVar9,&local_b0,&local_98);
        fVar10 = (float)local_b0;
      }
      if (fVar10 <= param_3) goto LAB_1803ca1ea;
      bVar4 = true;
    }
    if (bVar3) {
      bVar3 = false;
      FUN_18015c010(local_88);
    }
    if (bVar4) {
      pppuVar7 = (undefined8 ***)((longlong)param_2[2] - 1);
      if (pppuVar7 != (undefined8 ***)0x0) {
        do {
          ppppuVar6 = param_2;
          if ((undefined8 ***)0xf < param_2[3]) {
            ppppuVar6 = (undefined8 ****)*param_2;
          }
        } while (((*(byte *)((longlong)ppppuVar6 + (longlong)pppuVar7) & 0xc0) == 0x80) &&
                (pppuVar7 = (undefined8 ***)((longlong)pppuVar7 - 1),
                pppuVar7 != (undefined8 ***)0x0));
      }
      pppuVar1 = param_2[2];
      if (pppuVar1 < pppuVar7) {
        uVar8 = (longlong)pppuVar7 - (longlong)pppuVar1;
        if ((ulonglong)((longlong)param_2[3] - (longlong)pppuVar1) < uVar8) {
          local_d8 = (undefined8 ***)((ulonglong)local_d8 & 0xffffffffffffff00);
          FUN_18013fa60(param_2,uVar8,local_b8,uVar8);
        }
        else {
          param_2[2] = pppuVar7;
          ppppuVar6 = param_2;
          if ((undefined8 ***)0xf < param_2[3]) {
            ppppuVar6 = (undefined8 ****)*param_2;
          }
          FUN_18063ab10((longlong)ppppuVar6 + (longlong)pppuVar1,0,uVar8);
          *(undefined1 *)((longlong)ppppuVar6 + (longlong)pppuVar1 + uVar8) = 0;
        }
      }
      else {
        param_2[2] = pppuVar7;
        ppppuVar6 = param_2;
        if ((undefined8 ***)0xf < param_2[3]) {
          ppppuVar6 = (undefined8 ****)*param_2;
        }
        *(undefined1 *)((longlong)ppppuVar6 + (longlong)pppuVar7) = 0;
      }
      goto LAB_1803ca110;
    }
    if (0x7fffffffffffffffU - (longlong)param_2[2] < 3) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bb70();
    }
    local_c8 = 3;
    local_d0 = &DAT_1807d3edc;
    local_d8 = param_2[2];
    FUN_18015a9c0(param_1);
  }
  else {
    *param_1 = (undefined1  [16])0x0;
    *(undefined8 *)param_1[1] = 0;
    *(undefined8 *)(param_1[1] + 8) = 0;
    pppuVar7 = param_2[1];
    pppuVar1 = param_2[2];
    pppuVar2 = param_2[3];
    *(undefined8 ****)*param_1 = *param_2;
    *(undefined8 ****)(*param_1 + 8) = pppuVar7;
    *(undefined8 ****)param_1[1] = pppuVar1;
    *(undefined8 ****)(param_1[1] + 8) = pppuVar2;
    *(undefined1 *)param_2 = 0;
    param_2[2] = (undefined8 ***)0x0;
    param_2[3] = (undefined8 ***)0xf;
  }
  FUN_18015c010(param_2);
}



