// FUN_180296930 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180296930 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_180296930(undefined8 *param_1,longlong *param_2,undefined8 param_3,undefined8 *param_4,
                  char param_5,char param_6)

{
  undefined8 *puVar1;
  char *pcVar2;
  longlong lVar3;
  bool bVar4;
  uint *puVar5;
  byte bVar6;
  uint uVar7;
  longlong *local_res10 [3];
  byte local_48 [8];
  uint local_40 [2];
  undefined8 *local_38;
  longlong **local_30;
  undefined8 local_28;
  
  local_30 = local_res10;
  local_res10[0] = param_2;
  local_38 = param_1;
  local_28 = param_3;
  FUN_180296c30(&local_38,1,1);
  FUN_180296c30(&local_38,0,1);
  FUN_180296c30(&local_38,2);
  puVar1 = (undefined8 *)*param_1;
  pcVar2 = (char *)*puVar1;
  if (*pcVar2 == '\0') {
LAB_180296a26:
    if (*(char *)puVar1[1] != '\0') {
      bVar6 = ((char *)puVar1[1])[0x78];
      if (*(char *)(param_1[1] + 7) == '\0') {
        local_48[0] = 0;
        local_48[1] = 2;
        local_48[2] = 3;
        local_48[3] = 4;
        local_48[4] = 5;
        local_48[5] = 6;
        local_48[6] = 8;
        local_48[7] = 9;
        if (10 < bVar6) {
          if (0x12 < bVar6) goto LAB_180296aab;
          bVar6 = local_48[bVar6 - 0xb];
        }
        if ((bVar6 != 6) || (*(char *)(param_1[2] + 7) == '\0')) goto LAB_180296aab;
      }
      lVar3 = local_res10[0][1];
      if (*(int *)(lVar3 + 0x7c) < 0) {
        uVar7 = (uint)(10 < *(byte *)(lVar3 + 0x78));
      }
      else {
        local_40[1] = 2;
        local_48[0] = 0;
        local_48[1] = 0;
        local_48[2] = 0;
        local_48[3] = 0;
        puVar5 = local_40 + 1;
        if (*(int *)(lVar3 + 0x7c) < 3) {
          puVar5 = (uint *)(lVar3 + 0x7c);
        }
        uVar7 = *puVar5;
      }
      if (uVar7 != 1) goto LAB_180296aa7;
    }
LAB_180296aab:
    bVar4 = false;
  }
  else {
    bVar6 = pcVar2[0x78];
    if (*(char *)(param_1[1] + 3) == '\0') {
      local_48[0] = 0;
      local_48[1] = 2;
      local_48[2] = 3;
      local_48[3] = 4;
      local_48[4] = 5;
      local_48[5] = 6;
      local_48[6] = 8;
      local_48[7] = 9;
      if (10 < bVar6) {
        if (0x12 < bVar6) goto LAB_180296a26;
        bVar6 = local_48[bVar6 - 0xb];
      }
      if ((bVar6 != 6) || (*(char *)(param_1[2] + 3) == '\0')) goto LAB_180296a26;
    }
    lVar3 = *local_res10[0];
    if (*(int *)(lVar3 + 0x7c) < 0) {
      uVar7 = (uint)(10 < *(byte *)(lVar3 + 0x78));
    }
    else {
      local_40[0] = 2;
      local_48[0] = 0;
      local_48[1] = 0;
      local_48[2] = 0;
      local_48[3] = 0;
      puVar5 = local_40;
      if (*(int *)(lVar3 + 0x7c) < 3) {
        puVar5 = (uint *)(lVar3 + 0x7c);
      }
      uVar7 = *puVar5;
    }
    if (uVar7 == 1) goto LAB_180296a26;
LAB_180296aa7:
    bVar4 = true;
  }
  if ((param_6 != '\0') || (bVar4)) goto LAB_180296bee;
  if (*pcVar2 == '\0') {
LAB_180296b20:
    if (*(char *)puVar1[1] == '\0') {
LAB_180296b76:
      if (*(char *)puVar1[2] == '\0') {
LAB_180296bc0:
        if (param_5 == '\0') goto LAB_180296bee;
      }
      else {
        bVar6 = ((char *)puVar1[2])[0x78];
        if (*(char *)(param_1[1] + 0xb) == '\0') {
          local_48[0] = 0;
          local_48[1] = 2;
          local_48[2] = 3;
          local_48[3] = 4;
          local_48[4] = 5;
          local_48[5] = 6;
          local_48[6] = 8;
          local_48[7] = 9;
          if (10 < bVar6) {
            if (0x12 < bVar6) goto LAB_180296bc0;
            bVar6 = local_48[bVar6 - 0xb];
          }
          if ((bVar6 != 6) || (*(char *)(param_1[2] + 0xb) == '\0')) goto LAB_180296bc0;
        }
      }
    }
    else {
      bVar6 = ((char *)puVar1[1])[0x78];
      if (*(char *)(param_1[1] + 7) == '\0') {
        local_48[0] = 0;
        local_48[1] = 2;
        local_48[2] = 3;
        local_48[3] = 4;
        local_48[4] = 5;
        local_48[5] = 6;
        local_48[6] = 8;
        local_48[7] = 9;
        if (10 < bVar6) {
          if (0x12 < bVar6) goto LAB_180296b76;
          bVar6 = local_48[bVar6 - 0xb];
        }
        if ((bVar6 != 6) || (*(char *)(param_1[2] + 7) == '\0')) goto LAB_180296b76;
      }
    }
  }
  else {
    bVar6 = pcVar2[0x78];
    if (*(char *)(param_1[1] + 3) == '\0') {
      local_48[0] = 0;
      local_48[1] = 2;
      local_48[2] = 3;
      local_48[3] = 4;
      local_48[4] = 5;
      local_48[5] = 6;
      local_48[6] = 8;
      local_48[7] = 9;
      if (10 < bVar6) {
        if (0x12 < bVar6) goto LAB_180296b20;
        bVar6 = local_48[bVar6 - 0xb];
      }
      if ((bVar6 != 6) || (*(char *)(param_1[2] + 3) == '\0')) goto LAB_180296b20;
    }
  }
  (**(code **)*param_4)
            (*(undefined8 *)param_4[1],*(undefined8 *)param_4[2],*(undefined8 *)param_4[3],
             *(undefined8 *)param_4[4]);
LAB_180296bee:
  FUN_180296c30(&local_38,1,0);
  FUN_180296c30(&local_38,0,0);
  FUN_180296c30(&local_38,2,0);
  return;
}



