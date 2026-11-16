// FUN_1805c33a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805c33a0 */

ulonglong FUN_1805c33a0(undefined8 param_1,undefined4 *param_2,uint param_3,uint param_4,
                       uint param_5)

{
  ushort uVar1;
  short sVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  void *pvVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined1 local_res18 [8];
  uint local_res20 [2];
  uint local_6c;
  uint local_68;
  void *local_60;
  void *local_58;
  int local_50;
  int local_4c;
  undefined8 local_48;
  void *local_40;
  
  puVar8 = *(undefined8 **)(param_2 + 0xb4);
  uVar10 = *(undefined8 *)(*(longlong *)(param_2 + 0x24) + 8);
  local_res20[0] = param_4;
  local_68 = param_3;
  if (puVar8 == (undefined8 *)0x0) {
    puVar8 = (undefined8 *)FUN_180573a90(uVar10,&DAT_18066f8b4);
    if (puVar8 == (undefined8 *)0x0) {
      return 0xb;
    }
    *(undefined8 **)(param_2 + 0xb4) = puVar8;
    *(undefined8 *)(param_2 + 0xa8) = *puVar8;
  }
  uVar9 = FUN_18057ae80(*(undefined8 *)(param_2 + 0x24),"postscript-cmaps",1);
  *(undefined8 *)(param_2 + 0xb6) = uVar9;
  if (*(longlong *)(param_2 + 0xb8) == 0) {
    uVar9 = FUN_180573a00(uVar10,"truetype");
    uVar9 = FUN_18057ae80(uVar9,"multi-masters",0);
    *(undefined8 *)(param_2 + 0xb8) = uVar9;
  }
  if (*(longlong *)(param_2 + 0xba) == 0) {
    uVar10 = FUN_180573a00(uVar10,"truetype");
    uVar10 = FUN_18057ae80(uVar10,"metrics-variations",0);
    *(undefined8 *)(param_2 + 0xba) = uVar10;
  }
  if (*(longlong *)(param_2 + 0xbc) == 0) {
    uVar10 = FUN_18057ae80(*(undefined8 *)(param_2 + 0x24),"metrics-variations",0);
    *(undefined8 *)(param_2 + 0xbc) = uVar10;
  }
  uVar11 = FUN_1805cc1a0(param_1,param_2,local_res18,&param_5);
  local_res20[0] = (uint)uVar11;
  if (local_res20[0] != 0) {
    return uVar11;
  }
  uVar10 = *(undefined8 *)(param_2 + 0x28);
  uVar15 = -param_3;
  if ((int)-param_3 < 0) {
    uVar15 = param_3;
  }
  uVar5 = uVar15 & 0xffff;
  if (((int)param_3 < 0) && (uVar5 != 0)) {
    uVar5 = uVar5 - 1;
  }
  uVar14 = 0;
  if ((int)uVar5 < (int)param_2[0x38]) {
LAB_1805c3519:
    uVar11 = FUN_1805788b0(uVar10,*(undefined4 *)
                                   (*(longlong *)(param_2 + 0x3a) + (longlong)(int)uVar5 * 4));
    local_res20[0] = (uint)uVar11;
    if (local_res20[0] != 0) {
      return uVar11;
    }
    uVar11 = (*(code *)puVar8[0x18])(param_2,uVar10);
    local_res20[0] = (uint)uVar11;
    if (local_res20[0] != 0) {
      return uVar11;
    }
    local_48 = *(undefined8 *)(param_2 + 0x26);
    local_4c = (int)uVar15 >> 0x10;
    local_60 = (void *)0x0;
    local_58 = (void *)0x0;
    iVar6 = (**(code **)(param_2 + 0xa8))(param_2,0x66766172,uVar10,&local_6c);
    if (((iVar6 == 0) && (0x13 < local_6c)) &&
       (iVar6 = FUN_180578540(uVar10,local_res20), local_res20[0] == 0)) {
      uVar1 = FUN_180578720(uVar10,local_res20);
      param_5 = (uint)uVar1;
      if (((local_res20[0] != 0) || (local_res20[0] = FUN_180578910(uVar10,2), local_res20[0] != 0))
         || ((uVar1 = FUN_180578720(uVar10,local_res20), local_res20[0] != 0 ||
             ((sVar2 = FUN_180578720(uVar10,local_res20), local_res20[0] != 0 ||
              (uVar3 = FUN_180578720(uVar10,local_res20), local_res20[0] != 0))))))
      goto LAB_1805c36fe;
      uVar4 = FUN_180578720(uVar10,local_res20);
      uVar15 = param_5;
      if (local_res20[0] != 0) goto LAB_1805c36fe;
      if ((((iVar6 != 0x10000) || (sVar2 != 0x14)) || (uVar1 == 0)) || (0x3ffe < uVar1)) {
LAB_1805c3710:
        param_5 = CONCAT22(param_5._2_2_,sVar2);
        uVar14 = (uint)uVar4;
        goto LAB_1805c3714;
      }
      if ((((uint)uVar4 != (uint)uVar1 * 4 + 4) && ((uint)uVar4 != (uint)uVar1 * 4 + 6)) ||
         ((uVar14 = (uint)uVar4, 0x7eff < uVar3 ||
          (local_6c < (uint)uVar3 * (uint)uVar4 + param_5 + (uint)uVar1 * 0x14))))
      goto LAB_1805c3710;
      param_2[0x104] = param_2[0x104] | 1;
      param_5 = 0x14;
    }
    else {
LAB_1805c36fe:
      uVar15 = 0;
      param_5 = 0;
      uVar1 = 0;
LAB_1805c3714:
      uVar3 = 0;
    }
    uVar5 = param_5;
    if ((*(byte *)(param_2 + 0x104) & 1) != 0) {
      local_60 = (void *)FUN_18057abe0(local_48,(uint)uVar1 * 4,local_res20);
      if ((local_res20[0] == 0) &&
         (local_58 = (void *)FUN_18057abe0(local_48,(uint)uVar1 * 4,local_res20),
         local_res20[0] == 0)) {
        local_50 = FUN_1805780f0(uVar10);
        local_50 = local_50 + uVar15;
        iVar6 = local_50 + -8;
        local_40 = local_60;
        if (uVar1 != 0) {
          uVar11 = (ulonglong)(uint)uVar1;
          pvVar12 = local_60;
          do {
            local_res20[0] = FUN_180578190(uVar10,iVar6,pvVar12,4);
            iVar6 = iVar6 + (uVar5 & 0xffff);
            pvVar12 = (void *)((longlong)pvVar12 + 4);
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
          uVar5 = param_5;
        }
        uVar13 = 0;
        uVar15 = (uint)uVar3;
        iVar6 = local_50 + -0xc + (uVar5 & 0xffff) * (uint)uVar1;
        param_5 = uVar15;
        if (uVar15 != 0) {
          do {
            local_res20[0] = FUN_180578190(uVar10,iVar6,local_58,(uint)uVar1 * 4);
            iVar7 = memcmp(local_60,local_58,(ulonglong)uVar1 << 2);
            if (iVar7 == 0) break;
            uVar13 = uVar13 + 1;
            iVar6 = iVar6 + uVar14;
          } while (uVar13 < uVar15);
        }
        param_2[0x109] = uVar13 + 1;
        if (uVar13 == uVar3) {
          uVar3 = uVar3 + 1;
        }
      }
    }
    FUN_18057abd0(local_48,local_60);
    FUN_18057abd0(local_48,local_58);
    iVar6 = (**(code **)(param_2 + 0xa8))(param_2,0x676c7966,uVar10,0);
    if (((iVar6 != 0) &&
        (iVar6 = (**(code **)(param_2 + 0xa8))(param_2,0x43464632,uVar10,0), iVar6 != 0)) &&
       (iVar6 = (**(code **)(param_2 + 0xa8))(param_2,0x43464620,uVar10,0), iVar6 == 0)) {
      uVar3 = 0;
    }
    if ((int)(uint)uVar3 < local_4c) {
      if (-1 < (int)local_68) goto LAB_1805c38f1;
      uVar3 = 0;
    }
    param_2[3] = (uint)uVar3 << 0x10;
    *param_2 = param_2[0x38];
    uVar11 = (ulonglong)local_res20[0];
    param_2[1] = local_68;
  }
  else {
    if ((int)param_3 < 0) {
      uVar5 = 0;
      goto LAB_1805c3519;
    }
LAB_1805c38f1:
    uVar11 = 6;
  }
  return uVar11;
}



