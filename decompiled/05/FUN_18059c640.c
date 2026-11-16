// FUN_18059c640 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18059c640 */

int FUN_18059c640(undefined8 *param_1,longlong param_2,undefined4 param_3,undefined8 param_4)

{
  byte *pbVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int local_res8 [2];
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  int local_48;
  undefined4 local_44;
  byte *local_40;
  undefined2 local_38;
  undefined2 local_36;
  undefined4 local_34;
  
  lVar2 = param_1[1];
  pbVar1 = (byte *)(param_2 + 0xb8);
  *(undefined8 **)(param_2 + 0x238) = param_1;
  iVar3 = 0;
  *(undefined1 *)(param_2 + 0x231) = 0;
  if ((*(int *)(param_2 + 0x70) != 0) && (*(int *)(param_2 + 0x74) != 0)) {
    FUN_18063ab10(pbVar1,0,0x178);
    *(undefined4 *)(param_2 + 0x180) = 7;
    *(undefined4 *)(param_2 + 0x184) = 1;
    *(undefined4 *)(param_2 + 0x204) = 0xffffffff;
    *(undefined4 *)(param_2 + 0x20c) = 0xf5c;
    *(undefined4 *)(param_2 + 0x17c) = 0x27a000;
    *(longlong *)(param_2 + 0x228) = param_2;
    *(undefined4 *)(param_2 + 0x260) = param_3;
    *(undefined8 *)(param_2 + 0x268) = param_4;
    if (*(char *)((longlong)param_1 + 0x2c) == '\0') {
      iVar4 = 0x61;
    }
    else {
      iVar4 = *(int *)((longlong)param_1 + 0x694) + 1;
    }
    local_78 = (undefined8 *)*param_1;
    local_44 = 0x2000;
    if (*(char *)((longlong)param_1 + 0x2c) != '\0') {
      local_44 = 0x5000;
    }
    local_38 = *(undefined2 *)(param_2 + 0xac);
    local_36 = *(undefined2 *)(param_2 + 0xae);
    local_70 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    local_34 = 0;
    local_40 = pbVar1;
    local_58 = FUN_18057ac40(*local_78,8,0,iVar4,0,local_res8);
    if (local_res8[0] == 0) {
      uStack_50 = local_58;
      local_48 = iVar4;
      iVar3 = FUN_1805788b0(lVar2,*(int *)(param_1 + 3) + *(int *)(param_2 + 0x70));
      if ((iVar3 == 0) && (iVar3 = FUN_180577bf0(lVar2,*(undefined4 *)(param_2 + 0x74)), iVar3 == 0)
         ) {
        iVar3 = FUN_1805a17b0(&local_78,*(undefined8 *)(lVar2 + 0x38),*(undefined8 *)(lVar2 + 0x40))
        ;
        FUN_180577d30(lVar2);
        if (iVar3 == 0) {
          *pbVar1 = *pbVar1 & 0xfe;
          iVar4 = *(int *)(param_2 + 0x210);
          if (iVar4 < 0) {
            *(int *)(param_2 + 0x210) = -iVar4;
          }
          else if (iVar4 == 0) {
            *(undefined4 *)(param_2 + 0x210) = 0x3ade68b1;
          }
          if ((1000 < *(int *)(param_2 + 0x180)) || (*(int *)(param_2 + 0x180) < 0)) {
            *(undefined4 *)(param_2 + 0x180) = 7;
          }
          if ((1000 < *(int *)(param_2 + 0x184)) || (*(int *)(param_2 + 0x184) < 0)) {
            *(undefined4 *)(param_2 + 0x184) = 1;
          }
        }
      }
    }
    *(undefined8 *)(param_2 + 0x278) = *(undefined8 *)(param_2 + 0x270);
    *(undefined4 *)(param_2 + 0x280) = 0;
    FUN_18057abd0(*local_78,local_58);
  }
  return iVar3;
}



