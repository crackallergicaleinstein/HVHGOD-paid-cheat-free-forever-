// FUN_1805b1080 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805b1080 */

void FUN_1805b1080(undefined8 *param_1)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  byte *local_res8;
  
  uVar4 = 0;
  uVar5 = 0;
  pbVar3 = (byte *)param_1[2];
  pbVar2 = (byte *)*param_1;
  for (local_res8 = pbVar2; local_res8 < pbVar3; local_res8 = local_res8 + 1) {
    bVar1 = *local_res8;
    if ((bVar1 != 0x20) && ((0xd < bVar1 || ((0x3601U >> (bVar1 & 0x1f) & 1) == 0)))) {
      if (bVar1 != 0x25) break;
      do {
        if ((*local_res8 == 0xd) || (*local_res8 == 10)) break;
        local_res8 = local_res8 + 1;
      } while (local_res8 < pbVar3);
    }
  }
  bVar6 = local_res8 < pbVar3;
  if (!bVar6) goto LAB_1805b11f2;
  bVar1 = *local_res8;
  if ((bVar1 == 0x5b) || (bVar1 == 0x5d)) {
LAB_1805b11db:
    local_res8 = local_res8 + 1;
LAB_1805b11de:
    uVar5 = uVar4;
    if ((local_res8 < pbVar3) && (local_res8 == pbVar2)) {
      uVar5 = 3;
    }
  }
  else {
    if (bVar1 == 0x7b) {
      uVar4 = FUN_1805bd4d0(&local_res8,pbVar3);
      goto LAB_1805b11de;
    }
    if (bVar1 == 0x28) {
      uVar4 = FUN_1805bd3b0(&local_res8,pbVar3);
      goto LAB_1805b11de;
    }
    if (bVar1 == 0x3c) {
      if ((local_res8 + 1 < pbVar3) && (local_res8[1] == 0x3c)) {
        local_res8 = local_res8 + 2;
      }
      else {
        uVar4 = FUN_1805bd650(&local_res8,pbVar3);
      }
      goto LAB_1805b11de;
    }
    if (bVar1 == 0x3e) {
      local_res8 = local_res8 + 1;
      if ((local_res8 < pbVar3) && (*local_res8 == 0x3e)) goto LAB_1805b11db;
      uVar4 = 3;
      goto LAB_1805b11de;
    }
    if (bVar1 == 0x2f) {
      local_res8 = local_res8 + 1;
    }
    for (; uVar5 = 0, local_res8 < pbVar3; local_res8 = local_res8 + 1) {
      bVar1 = *local_res8;
      if (((bVar1 == 0x20) ||
          ((bVar1 < 0x3d && ((0x1000832000003601U >> ((ulonglong)bVar1 & 0x3f) & 1) != 0)))) ||
         (((byte)(bVar1 - 0x3e) < 0x40 &&
          ((0xa0000000a0000001U >> ((ulonglong)(byte)(bVar1 - 0x3e) & 0x3f) & 1) != 0))))
      goto LAB_1805b11de;
    }
  }
  bVar6 = local_res8 < pbVar3;
LAB_1805b11f2:
  if (!bVar6 && local_res8 != pbVar3) {
    local_res8 = pbVar3;
  }
  *param_1 = local_res8;
  *(undefined4 *)(param_1 + 3) = uVar5;
  return;
}



