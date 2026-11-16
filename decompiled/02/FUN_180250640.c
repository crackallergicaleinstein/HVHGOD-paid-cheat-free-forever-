// FUN_180250640 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180250640 */

undefined8 * FUN_180250640(undefined8 *param_1,longlong param_2)

{
  char cVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined4 local_14;
  
  lVar3 = FUN_18017ea70();
  *(int *)(lVar3 + 4) = *(int *)(lVar3 + 4) + 1;
  if (param_2 != 0) {
    local_88 = 0;
    uStack_84 = 0;
    uStack_80 = 0;
    uStack_7c = 0;
    uStack_78 = 0;
    uStack_74 = 0;
    uStack_70 = 0;
    uStack_6c = 0;
    uStack_68 = 0;
    uStack_64 = 0;
    uStack_60 = 0;
    uStack_5c = 0;
    uStack_58 = 0;
    uStack_54 = 0;
    uStack_50 = 0;
    uStack_4c = 0;
    uStack_48 = 0;
    local_44 = 0;
    uStack_40 = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    uStack_30 = 0;
    uStack_2c = 0;
    uStack_28 = 0;
    uStack_24 = 0;
    uStack_20 = 0;
    uStack_18 = 0;
    local_14 = 0;
    cVar1 = FUN_1804514f0(&local_88,param_2,0x78);
    if (cVar1 != '\0') {
      *param_1 = CONCAT44(uStack_84,local_88);
      param_1[1] = CONCAT44(uStack_7c,uStack_80);
      param_1[2] = CONCAT44(uStack_74,uStack_78);
      param_1[3] = CONCAT44(uStack_6c,uStack_70);
      param_1[4] = CONCAT44(uStack_64,uStack_68);
      param_1[5] = CONCAT44(uStack_5c,uStack_60);
      param_1[6] = CONCAT44(uStack_54,uStack_58);
      param_1[7] = CONCAT44(uStack_4c,uStack_50);
      param_1[8] = CONCAT44(local_44,uStack_48);
      param_1[9] = CONCAT44(uStack_3c,uStack_40);
      param_1[10] = CONCAT44(uStack_34,uStack_38);
      param_1[0xb] = CONCAT44(uStack_2c,uStack_30);
      param_1[0xc] = CONCAT44(uStack_24,uStack_28);
      param_1[0xd] = uStack_20;
      param_1[0xe] = CONCAT44(local_14,uStack_18);
      uVar2 = 1;
      goto LAB_1802506f1;
    }
  }
  uVar2 = 0;
LAB_1802506f1:
  *(undefined1 *)(param_1 + 0xf) = uVar2;
  lVar3 = FUN_18017ea70();
  if (*(int *)(lVar3 + 4) != 0) {
    *(int *)(lVar3 + 4) = *(int *)(lVar3 + 4) + -1;
  }
  return param_1;
}



