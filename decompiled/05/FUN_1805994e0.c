// FUN_1805994e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805994e0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1805994e0(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong *plVar9;
  int iVar10;
  longlong alStack_338 [9];
  undefined8 uStack_2f0;
  undefined1 auStack_2e8 [32];
  undefined8 local_2c8;
  int *local_2c0;
  int local_2b8;
  int local_2b4;
  int local_2b0 [2];
  undefined1 *local_2a8;
  longlong local_2a0;
  longlong local_298;
  undefined1 local_288 [8];
  undefined1 local_280 [88];
  undefined1 local_228 [8];
  longlong local_220 [59];
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_2e8;
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  local_2b8 = 0;
  uStack_2f0 = 0x18059952b;
  (*(code *)param_2[0xf])(param_2,local_288,4,local_2b0);
  if (local_2b0[0] < 0) {
    *(undefined4 *)(param_2 + 3) = 0xa2;
  }
  else if ((local_2b0[0] == 0) || (4 < local_2b0[0])) {
LAB_180599719:
    *(undefined4 *)(param_2 + 3) = 3;
  }
  else {
    local_2a0 = *param_2;
    local_298 = param_2[2];
    uStack_2f0 = 0x18059958f;
    local_2b8 = FUN_18059c0f0(param_1,0);
    if (local_2b8 == 0) {
      iVar10 = 0;
      lVar2 = *(longlong *)(param_1 + 0x2e0);
      if (0 < local_2b0[0]) {
        plVar8 = (longlong *)(lVar2 + 0xb0);
        local_2a8 = local_280 + -lVar2;
        do {
          uVar6 = 0;
          *param_2 = *(longlong *)((longlong)plVar8 + ((longlong)alStack_338 - lVar2));
          param_2[2] = *(longlong *)(local_2a8 + -0xb0 + (longlong)plVar8);
          uStack_2f0 = 0x180599603;
          (*(code *)param_2[0xf])(param_2,local_228,0x14,&local_2b4);
          if ((0x13 < local_2b4 - 1U) || (*plVar8 != 0)) goto LAB_180599719;
          local_2c0 = &local_2b8;
          local_2c8 = 0;
          uStack_2f0 = 0x18059963e;
          lVar4 = FUN_18057ac40(uVar1,4,0);
          *plVar8 = lVar4;
          if (local_2b8 != 0) goto LAB_180599714;
          local_2c0 = &local_2b8;
          local_2c8 = 0;
          uStack_2f0 = 0x180599671;
          lVar4 = FUN_18057ac40(uVar1,4,0,local_2b4);
          plVar8[1] = lVar4;
          if (local_2b8 != 0) goto LAB_180599714;
          *(char *)(plVar8 + -1) = (char)local_2b4;
          if (0 < local_2b4) {
            plVar9 = local_220;
            uVar7 = uVar6;
            do {
              *param_2 = plVar9[-1] + 1;
              param_2[2] = *plVar9 + -1;
              uStack_2f0 = 0x1805996bd;
              uVar3 = (*(code *)param_2[9])(param_2);
              *(undefined4 *)(uVar7 + *plVar8) = uVar3;
              uStack_2f0 = 0x1805996ce;
              uVar3 = (*(code *)param_2[10])(param_2,0);
              plVar9 = plVar9 + 3;
              uVar5 = (int)uVar6 + 1;
              uVar6 = (ulonglong)uVar5;
              *(undefined4 *)(uVar7 + plVar8[1]) = uVar3;
              uVar7 = uVar7 + 4;
            } while ((int)uVar5 < local_2b4);
          }
          iVar10 = iVar10 + 1;
          plVar8 = plVar8 + 3;
        } while (iVar10 < local_2b0[0]);
      }
      *param_2 = local_2a0;
      param_2[2] = local_298;
    }
LAB_180599714:
    *(int *)(param_2 + 3) = local_2b8;
  }
}



