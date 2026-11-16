// FUN_1805aab20 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805aab20 */

ulonglong FUN_1805aab20(longlong param_1,undefined4 *param_2,uint param_3,uint param_4)

{
  uint uVar1;
  longlong lVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  short *psVar9;
  undefined8 uVar10;
  size_t sVar11;
  undefined8 uVar12;
  char *pcVar13;
  short sVar14;
  uint local_res20 [2];
  undefined4 *local_38;
  undefined8 local_30;
  
  uVar12 = *(undefined8 *)(param_2 + 0x26);
  uVar5 = -param_3;
  if ((int)-param_3 < 0) {
    uVar5 = param_3;
  }
  local_res20[0] = param_4;
  uVar7 = FUN_1805ab2c0(param_2,param_3);
  local_res20[0] = (uint)uVar7;
  if ((local_res20[0] == 0) && ((int)param_3 < 0)) {
    return uVar7;
  }
  if ((char)uVar7 == '\x02') {
    puVar8 = (undefined4 *)FUN_18057aad0(uVar12,0xb8,local_res20);
    *(undefined4 **)(param_2 + 0x36) = puVar8;
    if (local_res20[0] != 0) {
      return (ulonglong)local_res20[0];
    }
    *param_2 = 1;
    *puVar8 = 0;
    puVar8[0x2a] = *(undefined4 *)(param_1 + 8);
    uVar7 = FUN_1805abac0(puVar8,param_1);
    local_res20[0] = (uint)uVar7;
    if (local_res20[0] != 0) goto LAB_1805aae5b;
    if ((int)param_3 < 0) {
      return uVar7;
    }
    if ((uVar5 & 0xffff) != 0) {
      local_res20[0] = 6;
      goto LAB_1805aae5b;
    }
  }
  else if (local_res20[0] != 0) goto LAB_1805aae5b;
  lVar2 = *(longlong *)(param_2 + 0x36);
  if (*(short *)(lVar2 + 0x60) != 0) {
    uVar1 = param_2[2];
    param_2[1] = uVar5 & 0xffff;
    param_2[2] = uVar1 | 0x12;
    if (*(short *)(lVar2 + 100) == *(short *)(lVar2 + 0x66)) {
      param_2[2] = uVar1 | 0x16;
    }
    if (*(char *)(lVar2 + 0x56) != '\0') {
      param_2[3] = param_2[3] | 1;
    }
    if (799 < *(ushort *)(lVar2 + 0x5a)) {
      param_2[3] = param_2[3] | 2;
    }
    psVar9 = (short *)FUN_18057abe0(uVar12,0x10,local_res20);
    *(short **)(param_2 + 0xc) = psVar9;
    if (local_res20[0] != 0) goto LAB_1805aae5b;
    param_2[10] = 1;
    psVar9[1] = *(short *)(lVar2 + 100);
    *psVar9 = *(short *)(lVar2 + 0x60) + *(short *)(lVar2 + 0x54);
    iVar4 = (uint)*(ushort *)(lVar2 + 0x4a) << 6;
    *(int *)(psVar9 + 2) = iVar4;
    sVar14 = *(short *)(lVar2 + 0x4e);
    if (sVar14 == 0) {
      sVar14 = 0x48;
    }
    sVar3 = *(short *)(lVar2 + 0x4c);
    if (sVar3 == 0) {
      sVar3 = 0x48;
    }
    iVar4 = FUN_1805753e0(iVar4,sVar3,0x48);
    uVar5 = iVar4 + 0x20U & 0xffffffc0;
    *(uint *)(psVar9 + 6) = uVar5;
    iVar4 = (uint)*(ushort *)(lVar2 + 0x60) << 6;
    if (iVar4 < (int)uVar5) {
      *(int *)(psVar9 + 6) = iVar4;
      uVar6 = FUN_1805753e0(iVar4,0x48,sVar3);
      *(undefined4 *)(psVar9 + 2) = uVar6;
    }
    iVar4 = FUN_1805753e0(*(undefined4 *)(psVar9 + 2),sVar14,0x48);
    local_30 = 0;
    *(uint *)(psVar9 + 4) = iVar4 + 0x20U & 0xffffffc0;
    if (*(char *)(lVar2 + 0x5c) == 'M') {
      local_30 = 0x161726d6e;
    }
    local_38 = param_2;
    local_res20[0] = FUN_180573150(&DAT_1806736d0,0,&local_38,0);
    if (local_res20[0] != 0) goto LAB_1805aae5b;
    if (*(byte *)(lVar2 + 0x68) <= *(byte *)(lVar2 + 0x69)) {
      param_2[4] = ((uint)*(byte *)(lVar2 + 0x69) - (uint)*(byte *)(lVar2 + 0x68)) + 2;
      if (*(uint *)(lVar2 + 0x74) < *(uint *)(lVar2 + 8)) {
        uVar5 = *(uint *)(lVar2 + 8) - *(uint *)(lVar2 + 0x74);
        uVar10 = FUN_18057abe0(uVar12,uVar5 + 1,local_res20);
        *(undefined8 *)(lVar2 + 0xb0) = uVar10;
        if (local_res20[0] == 0) {
          FUN_18063aed0(uVar10,(ulonglong)*(uint *)(lVar2 + 0x74) + *(longlong *)(lVar2 + 0xa0),
                        uVar5);
          *(undefined1 *)((ulonglong)uVar5 + *(longlong *)(lVar2 + 0xb0)) = 0;
          pcVar13 = *(char **)(lVar2 + 0xb0);
          sVar11 = strlen(pcVar13);
          uVar12 = FUN_18057ac40(uVar12,1,uVar5 + 1,(int)sVar11 + 1,pcVar13,local_res20);
          *(undefined8 *)(lVar2 + 0xb0) = uVar12;
          if (local_res20[0] == 0) {
            *(undefined8 *)(param_2 + 6) = uVar12;
            *(char **)(param_2 + 8) = "Regular";
            uVar5 = param_2[3] & 1;
            if ((param_2[3] & 2) != 0) {
              pcVar13 = "Bold Italic";
              if (uVar5 == 0) {
                pcVar13 = "Bold";
              }
              *(char **)(param_2 + 8) = pcVar13;
              return 0;
            }
            if (uVar5 == 0) {
              return 0;
            }
            *(char **)(param_2 + 8) = "Italic";
            return 0;
          }
        }
        goto LAB_1805aae5b;
      }
    }
  }
  local_res20[0] = 3;
LAB_1805aae5b:
  uVar12 = *(undefined8 *)(param_2 + 0x26);
  FUN_1805aba40(param_2);
  FUN_18057abd0(uVar12,*(undefined8 *)(param_2 + 0xc));
  *(undefined8 *)(param_2 + 0xc) = 0;
  param_2[10] = 0;
  return (ulonglong)local_res20[0];
}



