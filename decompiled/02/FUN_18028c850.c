// FUN_18028c850 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18028c850 */

longlong *
FUN_18028c850(longlong *param_1,byte param_2,byte param_3,uint param_4,char param_5,
             undefined2 param_6)

{
  char cVar1;
  byte bVar2;
  ULONGLONG UVar3;
  longlong lVar4;
  byte bVar5;
  uint uVar6;
  ulonglong uVar7;
  char cStackX_23;
  byte local_38 [16];
  
  uVar7 = (ulonglong)param_2;
  local_38[0] = 0;
  local_38[1] = 2;
  local_38[2] = 3;
  local_38[3] = 4;
  local_38[4] = 5;
  local_38[5] = 6;
  local_38[6] = 8;
  local_38[7] = 9;
  if (10 < param_2) {
    if (param_2 < 0x13) {
      uVar7 = (ulonglong)local_38[param_2 - 0xb];
    }
    else {
      uVar7 = 2;
    }
  }
  cVar1 = (char)((ushort)param_6 >> 8);
  bVar5 = (byte)uVar7;
  if (((cVar1 != '\0') && ((char)param_6 != '\0')) && (bVar5 != 0)) {
    lVar4 = (&DAT_180c6e288)[param_3];
    if ((param_3 != 0) && (lVar4 != 0)) {
      UVar3 = GetTickCount64();
      cVar1 = FUN_18028c730(lVar4,UVar3);
      if (cVar1 == '\0') {
        lVar4 = 0;
      }
    }
    *param_1 = lVar4;
    goto LAB_18028ca03;
  }
  if (cVar1 != '\0') {
    if (bVar5 == 6) {
      bVar5 = 3;
    }
    uVar7 = (ulonglong)bVar5;
    if ((char)param_6 == '\0') {
      uVar6 = (uint)bVar5;
      if (bVar5 == 0) {
        uVar6 = 2;
      }
      uVar7 = (ulonglong)uVar6;
    }
  }
  cStackX_23 = (char)(param_4 >> 0x18);
  bVar5 = (byte)uVar7;
  uVar6 = (uint)uVar7;
  if ((param_5 == '\0') && (cStackX_23 == -1)) {
    if (param_3 == 0) {
      if (bVar5 < 0x13) {
        lVar4 = *(longlong *)(&DAT_180c7c270 + uVar7 * 8);
        goto LAB_18028c9b1;
      }
LAB_18028c9af:
      lVar4 = 0;
    }
    else {
      local_38[0] = 0;
      local_38[1] = 2;
      local_38[2] = 3;
      local_38[3] = 4;
      local_38[4] = 5;
      local_38[5] = 6;
      local_38[6] = 8;
      local_38[7] = 9;
      if (uVar6 < 0xb) {
        bVar2 = bVar5;
      }
      else if (uVar6 < 0x13) {
        bVar2 = local_38[uVar6 - 0xb];
      }
      else {
        bVar2 = 2;
      }
      lVar4 = *(longlong *)(&DAT_180c72200 + (ulonglong)bVar2 * 8);
LAB_18028c995:
      if (lVar4 != 0) {
        UVar3 = GetTickCount64();
        cVar1 = FUN_18028c730(lVar4,UVar3);
        if (cVar1 == '\0') goto LAB_18028c9af;
      }
    }
  }
  else {
    lVar4 = FUN_1803e6cb0(uVar7,(ulonglong)param_3);
    if (param_3 != 0) goto LAB_18028c995;
  }
LAB_18028c9b1:
  *param_1 = lVar4;
  local_38[0] = 0;
  local_38[1] = 2;
  local_38[2] = 3;
  local_38[3] = 4;
  local_38[4] = 5;
  local_38[5] = 6;
  local_38[6] = 8;
  local_38[7] = 9;
  if (bVar5 < 0xb) {
LAB_18028c9d7:
    if ((3 < (byte)((char)uVar6 - 1U)) && ((char)uVar6 != '\n')) goto LAB_18028ca03;
  }
  else if (bVar5 < 0x13) {
    uVar6 = (uint)local_38[uVar6 - 0xb];
    goto LAB_18028c9d7;
  }
  param_4 = ((param_4 >> 0x10 & 0xff | 0xffffff00) << 8 | param_4 >> 8 & 0xff) << 8 | param_4 & 0xff
  ;
LAB_18028ca03:
  *(uint *)(param_1 + 1) = param_4;
  return param_1;
}



