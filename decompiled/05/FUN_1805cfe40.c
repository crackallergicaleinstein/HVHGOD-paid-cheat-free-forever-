// FUN_1805cfe40 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805cfe40 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1805cfe40(undefined4 *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  undefined1 auStack_40d8 [32];
  int local_40b8;
  ulonglong local_40b0;
  int local_40a8;
  undefined4 local_40a4;
  undefined1 local_4028 [16344];
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_40d8;
  iVar3 = param_1[3];
  local_40b8 = param_1[1];
  local_50 = 0x7fffffff;
  local_40b0 = (ulonglong)(iVar3 - local_40b8);
  bVar1 = false;
  *(undefined8 **)(param_1 + 0xe) = &local_50;
  *(undefined1 **)(param_1 + 0x10) = local_4028;
  local_48 = 0;
  local_40 = 0;
  if (0x55 < local_40b0) {
    uVar4 = (local_40b0 + 0x54) / 0x55;
    local_40b0 = ((local_40b0 - 1) + uVar4) / uVar4;
  }
  if (local_40b8 < iVar3) {
    do {
      param_1[6] = local_40b8;
      iVar9 = local_40b8 + (int)local_40b0;
      iVar2 = iVar9;
      if (iVar3 <= iVar9) {
        iVar2 = iVar3;
      }
      param_1[7] = iVar2;
      param_1[8] = iVar2 - local_40b8;
      local_40a4 = *param_1;
      local_40a8 = param_1[2];
      piVar6 = &local_40a8;
      local_40b8 = iVar9;
      do {
        iVar3 = param_1[8];
        piVar7 = piVar6 + 1;
        iVar2 = *piVar7;
        iVar8 = 0;
        iVar9 = *piVar6;
        param_1[4] = iVar2;
        param_1[5] = iVar9;
        if (0 < iVar3) {
          lVar5 = 0;
          do {
            iVar8 = iVar8 + 1;
            *(undefined8 *)(lVar5 + *(longlong *)(param_1 + 0x10)) = *(undefined8 *)(param_1 + 0xe);
            iVar3 = param_1[8];
            lVar5 = lVar5 + 8;
          } while (iVar8 < iVar3);
        }
        param_1[9] = 0;
        *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_1 + 0xe);
        *(undefined1 **)(param_1 + 0xc) = local_4028 + (((longlong)iVar3 * 8 + 0x17U) / 0x18) * 0x18
        ;
        if (bVar1) {
          FUN_180159a00();
          iVar3 = FUN_180575a40(param_1 + 0x14);
          FUN_180159a00();
        }
        else {
          iVar3 = FUN_180575a40(param_1 + 0x14);
        }
        bVar1 = true;
        if (iVar3 == 0) {
          if (*(longlong *)(param_1 + 0x22) == 0) {
            FUN_1805d08f0(param_1);
            piVar7 = piVar6 + -1;
          }
          else {
            FUN_1805d0b40();
            piVar7 = piVar6 + -1;
          }
        }
        else {
          if ((iVar3 != 0x62) || (iVar3 = iVar9 - iVar2 >> 1, iVar3 == 0)) goto LAB_1805d00c3;
          piVar6[2] = iVar2;
          *piVar7 = iVar2 + iVar3;
        }
        piVar6 = piVar7;
      } while (&local_40a8 <= piVar7);
      iVar3 = param_1[3];
    } while (local_40b8 < iVar3);
  }
LAB_1805d00c3:
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
}



