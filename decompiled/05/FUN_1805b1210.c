// FUN_1805b1210 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805b1210 */

void FUN_1805b1210(longlong *param_1,undefined8 *param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  undefined4 uVar6;
  bool bVar7;
  byte *local_res8;
  
  *(undefined4 *)(param_2 + 2) = 0;
  *param_2 = 0;
  param_2[1] = 0;
  pbVar2 = (byte *)param_1[2];
  for (local_res8 = (byte *)*param_1; local_res8 < pbVar2; local_res8 = local_res8 + 1) {
    bVar1 = *local_res8;
    if ((bVar1 != 0x20) && ((0xd < bVar1 || ((0x3601U >> (bVar1 & 0x1f) & 1) == 0)))) {
      if (bVar1 != 0x25) break;
      do {
        if ((*local_res8 == 0xd) || (*local_res8 == 10)) break;
        local_res8 = local_res8 + 1;
      } while (local_res8 < pbVar2);
    }
  }
  *param_1 = (longlong)local_res8;
  if (pbVar2 <= local_res8) {
    return;
  }
  bVar1 = *local_res8;
  *param_2 = local_res8;
  if (bVar1 == 0x28) {
    *(undefined4 *)(param_2 + 2) = 2;
    iVar4 = FUN_1805bd3b0(&local_res8,pbVar2);
    bVar7 = iVar4 == 0;
  }
  else {
    if (bVar1 == 0x5b) {
      *(undefined4 *)(param_2 + 2) = 3;
      *param_1 = (longlong)(local_res8 + 1);
      iVar4 = 1;
      FUN_1805b1020(param_1);
      pbVar5 = (byte *)*param_1;
      pbVar3 = local_res8;
      while ((local_res8 = pbVar5, local_res8 < pbVar2 && ((int)param_1[3] == 0))) {
        if (*local_res8 == 0x5b) {
          iVar4 = iVar4 + 1;
        }
        else if ((*local_res8 == 0x5d) && (iVar4 = iVar4 + -1, iVar4 < 1)) {
          local_res8 = local_res8 + 1;
          goto LAB_1805b12c8;
        }
        *param_1 = (longlong)local_res8;
        local_res8 = pbVar3;
        FUN_1805b1080(param_1);
        for (pbVar5 = (byte *)*param_1; pbVar5 < (byte *)param_1[2]; pbVar5 = pbVar5 + 1) {
          bVar1 = *pbVar5;
          if ((bVar1 != 0x20) && ((0xd < bVar1 || ((0x3601U >> (bVar1 & 0x1f) & 1) == 0)))) {
            if (bVar1 != 0x25) break;
            do {
              if ((*pbVar5 == 0xd) || (*pbVar5 == 10)) break;
              pbVar5 = pbVar5 + 1;
            } while (pbVar5 < (byte *)param_1[2]);
          }
        }
        *param_1 = (longlong)pbVar5;
        pbVar3 = local_res8;
      }
      goto LAB_1805b12cc;
    }
    if (bVar1 == 0x7b) {
      *(undefined4 *)(param_2 + 2) = 3;
      iVar4 = FUN_1805bd4d0(&local_res8,pbVar2);
      bVar7 = iVar4 == 0;
    }
    else {
      uVar6 = 1;
      if (*local_res8 == 0x2f) {
        uVar6 = 4;
      }
      *(undefined4 *)(param_2 + 2) = uVar6;
      FUN_1805b1080(param_1);
      local_res8 = (byte *)*param_1;
      bVar7 = (int)param_1[3] == 0;
    }
  }
  if (bVar7) {
LAB_1805b12c8:
    param_2[1] = local_res8;
  }
LAB_1805b12cc:
  if (param_2[1] == 0) {
    *param_2 = 0;
    *(undefined4 *)(param_2 + 2) = 0;
  }
  *param_1 = (longlong)local_res8;
  return;
}



