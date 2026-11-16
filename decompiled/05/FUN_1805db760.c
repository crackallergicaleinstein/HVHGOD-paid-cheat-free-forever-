// FUN_1805db760 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805db760 */

ulonglong FUN_1805db760(int *param_1,undefined1 *param_2,uint param_3)

{
  uint *puVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint local_res8;
  byte local_res18 [8];
  uint local_res20;
  int local_48 [4];
  
  uVar7 = param_1[0x13];
  uVar9 = 0;
  uVar4 = param_1[0x14];
  uVar10 = param_1[0x12];
  local_res20 = uVar7;
  if (param_3 == 0) goto LAB_1805dbab2;
  iVar5 = *param_1;
  if (iVar5 == 0) {
    iVar5 = FUN_1805788b0(*(undefined8 *)(param_1 + 0x32),2);
    if ((iVar5 == 0) &&
       (iVar5 = FUN_180578980(*(undefined8 *)(param_1 + 0x32),local_res18,1), iVar5 == 1)) {
      uVar7 = local_res18[0] & 0x1f;
      param_1[0xd] = local_res18[0] & 0x80;
      iVar5 = 1 << (sbyte)uVar7;
      param_1[0xc] = uVar7;
      param_1[0xe] = iVar5 + -0x100;
      if (uVar7 < 0x11) {
        param_1[0xf] = 9;
        uVar4 = 0;
        param_1[0x10] = (uint)((local_res18[0] & 0x80) != 0);
        iVar3 = 0x100;
        local_res8 = 0;
        if (uVar7 < 10) {
          iVar3 = iVar5 + -0xff;
        }
        param_1[0x11] = iVar3;
        uVar7 = FUN_1805db5f0(param_1);
        if (uVar7 < 0x100) {
          if (param_2 != (undefined1 *)0x0) {
            *param_2 = (char)uVar7;
          }
          uVar9 = 1;
          uVar10 = uVar7;
          local_res20 = uVar7;
          if (param_3 < 2) goto LAB_1805dbab2;
          *param_1 = 1;
          goto LAB_1805db891;
        }
      }
    }
  }
  else {
    local_res8 = uVar4;
    if (iVar5 != 1) {
      if (iVar5 == 2) goto LAB_1805db9b6;
      goto LAB_1805dbab2;
    }
LAB_1805db891:
    while( true ) {
      uVar4 = FUN_1805db5f0(param_1);
      if ((int)uVar4 < 0) break;
      if ((uVar4 == 0x100) && (param_1[0xd] != 0)) {
        param_1[0x10] = 0;
        uVar7 = 0;
        *(undefined1 *)(param_1 + 8) = 1;
        local_res20 = 0;
        uVar10 = 0;
      }
      else {
        local_res8 = uVar4;
        if (0xff < uVar4) {
          if ((uint)param_1[0x10] <= uVar4 - 0x100) {
            if (((uint)param_1[0x10] < uVar4 - 0x100) ||
               ((*(ulonglong *)(param_1 + 0x20) <= (ulonglong)(uint)param_1[0x1e] &&
                (iVar5 = FUN_1805dbae0(param_1), iVar5 < 0)))) goto LAB_1805dbaa4;
            *(char *)((ulonglong)(uint)param_1[0x1e] + *(longlong *)(param_1 + 0x1c)) = (char)uVar7;
            param_1[0x1e] = param_1[0x1e] + 1;
            uVar4 = uVar10;
          }
          for (; 0xff < uVar4;
              uVar4 = (uint)*(ushort *)
                             (*(longlong *)(param_1 + 0x16) + (ulonglong)(uVar4 - 0x100) * 2)) {
            if ((*(longlong *)(param_1 + 0x16) == 0) ||
               ((*(ulonglong *)(param_1 + 0x20) <= (ulonglong)(uint)param_1[0x1e] &&
                (iVar5 = FUN_1805dbae0(param_1), iVar5 < 0)))) goto LAB_1805dba9d;
            *(undefined1 *)((ulonglong)(uint)param_1[0x1e] + *(longlong *)(param_1 + 0x1c)) =
                 *(undefined1 *)((ulonglong)(uVar4 - 0x100) + *(longlong *)(param_1 + 0x18));
            param_1[0x1e] = param_1[0x1e] + 1;
          }
        }
        uVar7 = uVar4;
        local_res20 = uVar7;
        if ((*(ulonglong *)(param_1 + 0x20) <= (ulonglong)(uint)param_1[0x1e]) &&
           (iVar5 = FUN_1805dbae0(param_1), iVar5 < 0)) break;
        *(char *)((ulonglong)(uint)param_1[0x1e] + *(longlong *)(param_1 + 0x1c)) = (char)uVar7;
        param_1[0x1e] = param_1[0x1e] + 1;
        *param_1 = 2;
LAB_1805db9b6:
        iVar5 = param_1[0x1e];
        while (iVar5 != 0) {
          param_1[0x1e] = iVar5 - 1U;
          if (param_2 != (undefined1 *)0x0) {
            param_2[uVar9] =
                 *(undefined1 *)((ulonglong)(iVar5 - 1U) + *(longlong *)(param_1 + 0x1c));
          }
          uVar8 = (int)uVar9 + 1;
          uVar9 = (ulonglong)uVar8;
          uVar4 = local_res8;
          if (uVar8 == param_3) goto LAB_1805dbab2;
          iVar5 = param_1[0x1e];
        }
        if ((uint)param_1[0x10] < (uint)param_1[0xe]) {
          uVar7 = param_1[0x1a];
          if (uVar7 <= (uint)param_1[0x10]) {
            if (uVar7 == 0) {
              uVar4 = 0x200;
            }
            else {
              uVar4 = uVar7 + (uVar7 >> 2);
            }
            lVar6 = FUN_18057ad10(*(undefined8 *)(param_1 + 0x34),3,uVar7,uVar4,
                                  *(undefined8 *)(param_1 + 0x16),local_48);
            *(longlong *)(param_1 + 0x16) = lVar6;
            if (local_48[0] != 0) break;
            lVar2 = lVar6 + (ulonglong)uVar4 * 2;
            *(longlong *)(param_1 + 0x18) = lVar2;
            FUN_18063aed0(lVar2,lVar6 + (ulonglong)uVar7 * 2,(ulonglong)uVar7);
            param_1[0x1a] = uVar4;
          }
          puVar1 = (uint *)(param_1 + 0x10);
          *(short *)(*(longlong *)(param_1 + 0x16) + (ulonglong)(uint)param_1[0x10] * 2) =
               (short)uVar10;
          *(char *)((ulonglong)*puVar1 + *(longlong *)(param_1 + 0x18)) = (char)local_res20;
          *puVar1 = *puVar1 + 1;
          uVar7 = local_res20;
        }
        *param_1 = 1;
        uVar10 = local_res8;
      }
    }
LAB_1805dba9d:
    uVar4 = local_res8;
  }
LAB_1805dbaa4:
  *param_1 = 3;
LAB_1805dbab2:
  param_1[0x13] = local_res20;
  param_1[0x12] = uVar10;
  param_1[0x14] = uVar4;
  return uVar9;
}



