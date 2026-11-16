// FUN_1802edf10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802edf10 */

longlong *
FUN_1802edf10(longlong *param_1,longlong param_2,byte *param_3,uint *param_4,char param_5,
             byte *param_6)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  char *pcVar6;
  
  pbVar4 = param_6;
  for (pcVar6 = "an"; (pbVar4 = pbVar4 + 1, pbVar4 != param_3 && (*pcVar6 != '\0'));
      pcVar6 = pcVar6 + 1) {
    if ((*pbVar4 | 0x20) != (int)*pcVar6) goto LAB_1802edf66;
  }
  if (*pcVar6 != '\0') {
LAB_1802edf66:
    *param_1 = param_2;
    *(undefined4 *)(param_1 + 1) = 0x16;
    return param_1;
  }
  pbVar4 = param_6 + 3;
  bVar2 = true;
  if (((pbVar4 != param_3) && (*pbVar4 == 0x28)) &&
     (param_6 = param_6 + 4, pbVar5 = param_6, param_6 != param_3)) {
    while (bVar1 = *pbVar5, bVar1 != 0x29) {
      if ((((0x2f < (byte)(bVar1 - 0x30)) ||
           ((0x87fffffe03ffU >> ((ulonglong)(bVar1 - 0x30) & 0x3f) & 1) == 0)) &&
          (0x19 < (byte)(bVar1 + 0x9f))) || (pbVar5 = pbVar5 + 1, pbVar5 == param_3))
      goto LAB_1802ee058;
    }
    pbVar4 = pbVar5 + 1;
    if ((longlong)pbVar5 - (longlong)param_6 == 3) {
      pcVar6 = "ind";
      goto joined_r0x0001802edff6;
    }
    if ((longlong)pbVar5 - (longlong)param_6 == 4) {
      pcVar6 = "snan";
      goto joined_r0x0001802ee02c;
    }
  }
LAB_1802ee058:
  uVar3 = 0x7f800000;
  if (param_5 != '\0') {
LAB_1802ee064:
    uVar3 = 0xff800000;
  }
  if (bVar2) {
    uVar3 = uVar3 | 0x400000;
  }
  else {
    uVar3 = uVar3 | 1;
  }
  *param_4 = uVar3;
  *param_1 = (longlong)pbVar4;
  *(undefined4 *)(param_1 + 1) = 0;
  return param_1;
joined_r0x0001802edff6:
  if ((param_6 == pbVar5) || (*pcVar6 == '\0')) goto LAB_1802ee015;
  if ((*param_6 | 0x20) != (int)*pcVar6) goto LAB_1802ee058;
  param_6 = param_6 + 1;
  pcVar6 = pcVar6 + 1;
  goto joined_r0x0001802edff6;
LAB_1802ee015:
  if (*pcVar6 != '\0') goto LAB_1802ee058;
  goto LAB_1802ee064;
joined_r0x0001802ee02c:
  if ((param_6 == pbVar5) || (*pcVar6 == '\0')) goto LAB_1802ee04d;
  if ((*param_6 | 0x20) != (int)*pcVar6) goto LAB_1802ee058;
  param_6 = param_6 + 1;
  pcVar6 = pcVar6 + 1;
  goto joined_r0x0001802ee02c;
LAB_1802ee04d:
  bVar2 = true;
  if (*pcVar6 == '\0') {
    bVar2 = false;
  }
  goto LAB_1802ee058;
}



