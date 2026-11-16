// FUN_18051f420 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18051f420 */

int FUN_18051f420(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  void *_Buf1;
  char *_Size;
  int iVar2;
  int iVar3;
  char **ppcVar4;
  longlong lVar5;
  char *local_e8 [5];
  undefined8 local_c0;
  char *local_b8;
  undefined8 local_b0;
  char *local_a8;
  undefined8 local_a0;
  char *local_98;
  undefined8 local_90;
  char *local_88;
  undefined8 local_80;
  char *local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  undefined1 *local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  
  plVar1 = (longlong *)*param_2;
  if ((param_2[1] == 8) && (*plVar1 == 0x6d69612069746e61)) {
    return -3;
  }
  if (param_2[1] == 5) {
    iVar3 = (int)*plVar1 + -0x63746970;
    if (iVar3 == 0) {
      iVar3 = *(byte *)((longlong)plVar1 + 4) - 0x68;
    }
    if (iVar3 == 0) {
      return -2;
    }
  }
  if ((param_2[1] == 8) && (*plVar1 == 0x65646f6d20776179)) {
    return -1;
  }
  _Buf1 = (void *)*param_2;
  _Size = (char *)param_2[1];
  local_e8[0] = "auto fire";
  ppcVar4 = local_e8;
  local_e8[2] = "fov";
  local_e8[4] = "max fov";
  local_b8 = "min damage";
  local_a8 = "hit chance";
  local_98 = "smooth";
  local_88 = "hitboxes";
  local_78 = "silent";
  local_68 = "no spread";
  local_58 = &DAT_1806bc7c4;
  local_48 = "airstrafe";
  iVar3 = 0;
  lVar5 = 0;
  local_38 = "jumpbug";
  local_28 = "edgejump";
  local_e8[1] = (char *)0x9;
  local_e8[3] = (char *)0x3;
  local_c0 = 7;
  local_b0 = 10;
  local_a0 = 10;
  local_90 = 6;
  local_80 = 8;
  local_70 = 6;
  local_60 = 9;
  local_50 = 4;
  local_40 = 9;
  local_30 = 7;
  local_20 = 8;
  while ((_Size != ppcVar4[1] ||
         ((_Size != (char *)0x0 && (iVar2 = memcmp(_Buf1,*ppcVar4,(size_t)_Size), iVar2 != 0))))) {
    iVar3 = iVar3 + 1;
    lVar5 = lVar5 + 1;
    ppcVar4 = ppcVar4 + 2;
    if (0xc < lVar5) {
      return 100;
    }
  }
  return iVar3;
}



