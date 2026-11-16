// FUN_1805b20d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805b20d0 */

int FUN_1805b20d0(ulonglong *param_1,int param_2,longlong param_3)

{
  byte bVar1;
  byte *pbVar2;
  undefined2 extraout_var;
  byte *pbVar3;
  int iVar4;
  undefined2 *puVar5;
  byte bVar6;
  undefined2 local_res8 [4];
  byte *local_res20;
  
  pbVar2 = (byte *)param_1[2];
  for (local_res20 = (byte *)*param_1; local_res20 < pbVar2; local_res20 = local_res20 + 1) {
    bVar6 = *local_res20;
    if ((bVar6 != 0x20) && ((0xd < bVar6 || ((0x3601U >> (bVar6 & 0x1f) & 1) == 0)))) {
      if (bVar6 != 0x25) break;
      do {
        if ((*local_res20 == 0xd) || (*local_res20 == 10)) break;
        local_res20 = local_res20 + 1;
      } while (local_res20 < pbVar2);
    }
  }
  iVar4 = 0;
  *param_1 = (ulonglong)local_res20;
  if (local_res20 < pbVar2) {
    bVar6 = 0;
    if (*local_res20 == 0x5b) {
      bVar6 = 0x5d;
    }
    else {
      pbVar3 = local_res20;
      if (*local_res20 != 0x7b) goto joined_r0x0001805b2186;
      bVar6 = 0x7d;
    }
    local_res20 = local_res20 + 1;
    pbVar3 = local_res20;
    if (local_res20 < pbVar2) {
joined_r0x0001805b2186:
      do {
        for (; pbVar3 < pbVar2; pbVar3 = pbVar3 + 1) {
          bVar1 = *pbVar3;
          if ((bVar1 != 0x20) && ((0xd < bVar1 || ((0x3601U >> (bVar1 & 0x1f) & 1) == 0)))) {
            if (bVar1 != 0x25) break;
            do {
              if ((*pbVar3 == 0xd) || (*pbVar3 == 10)) break;
              pbVar3 = pbVar3 + 1;
            } while (pbVar3 < pbVar2);
          }
        }
        local_res20 = pbVar3;
        if (pbVar2 <= pbVar3) break;
        if (*pbVar3 == bVar6) {
          local_res20 = pbVar3 + 1;
          break;
        }
        if (param_3 == 0) {
          puVar5 = local_res8;
        }
        else {
          if (param_2 <= iVar4) break;
          puVar5 = (undefined2 *)(param_3 + (longlong)iVar4 * 2);
        }
        FUN_1805b43e0(&local_res20,pbVar2,0);
        *puVar5 = extraout_var;
        if (pbVar3 == local_res20) {
          iVar4 = -1;
          break;
        }
        iVar4 = iVar4 + 1;
        if ((bVar6 == 0) || (pbVar3 = local_res20, pbVar2 <= local_res20)) break;
      } while( true );
    }
  }
  *param_1 = (ulonglong)local_res20;
  return iVar4;
}



