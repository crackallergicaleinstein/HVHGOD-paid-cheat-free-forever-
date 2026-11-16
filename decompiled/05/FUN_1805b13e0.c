// FUN_1805b13e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805b13e0 */

void FUN_1805b13e0(longlong *param_1,undefined4 *param_2,ulonglong param_3,undefined4 *param_4)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  byte *local_68;
  undefined4 *local_60;
  longlong local_58;
  longlong local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  int local_38;
  undefined4 uStack_34;
  
  *param_4 = 0xffffffff;
  FUN_1805b1210(param_1,&local_48);
  if (local_38 == 3) {
    local_58 = *param_1;
    local_50 = param_1[2];
    pbVar5 = (byte *)((longlong)uStack_40 + -1);
    puVar7 = param_2 + (param_3 & 0xffffffff) * 6;
    local_68 = (byte *)((longlong)local_48 + 1);
    *param_1 = (longlong)local_68;
    param_1[2] = (longlong)pbVar5;
    puVar8 = param_2;
    if (local_68 < pbVar5) {
      local_60 = puVar7;
      do {
        uStack_40 = (byte *)0x0;
        for (; local_68 < pbVar5; local_68 = local_68 + 1) {
          bVar1 = *local_68;
          if ((bVar1 != 0x20) && ((0xd < bVar1 || ((0x3601U >> (bVar1 & 0x1f) & 1) == 0)))) {
            if (bVar1 != 0x25) break;
            do {
              if ((*local_68 == 0xd) || (*local_68 == 10)) break;
              local_68 = local_68 + 1;
            } while (local_68 < pbVar5);
          }
        }
        *param_1 = (longlong)local_68;
        if (pbVar5 <= local_68) break;
        bVar1 = *local_68;
        local_48 = local_68;
        if (bVar1 == 0x28) {
          iVar6 = 2;
          local_38 = 2;
          iVar3 = FUN_1805bd3b0(&local_68,pbVar5);
LAB_1805b15f5:
          pbVar4 = local_68;
LAB_1805b15fb:
          if (iVar3 != 0) goto LAB_1805b1606;
LAB_1805b15fd:
          uStack_40 = pbVar4;
          if (pbVar4 == (byte *)0x0) goto LAB_1805b1606;
        }
        else {
          if (bVar1 != 0x5b) {
            if (bVar1 == 0x7b) {
              iVar6 = 3;
              local_38 = 3;
              iVar3 = FUN_1805bd4d0(&local_68,pbVar5);
              goto LAB_1805b15f5;
            }
            iVar6 = 1;
            if (bVar1 == 0x2f) {
              iVar6 = 4;
            }
            local_38 = iVar6;
            FUN_1805b1080(param_1);
            iVar3 = (int)param_1[3];
            pbVar4 = (byte *)*param_1;
            goto LAB_1805b15fb;
          }
          iVar6 = 3;
          local_38 = 3;
          *param_1 = (longlong)(local_68 + 1);
          iVar3 = 1;
          FUN_1805b1020(param_1);
          pbVar4 = (byte *)*param_1;
          if (pbVar4 < pbVar5) {
            do {
              if ((int)param_1[3] != 0) goto LAB_1805b1606;
              if (*pbVar4 == 0x5b) {
                iVar3 = iVar3 + 1;
              }
              else if ((*pbVar4 == 0x5d) && (iVar3 = iVar3 + -1, iVar3 < 1)) {
                pbVar4 = pbVar4 + 1;
                goto LAB_1805b15fd;
              }
              *param_1 = (longlong)pbVar4;
              FUN_1805b1080(param_1);
              pbVar2 = (byte *)param_1[2];
              pbVar4 = (byte *)*param_1;
              if (pbVar4 < pbVar2) {
                do {
                  bVar1 = *pbVar4;
                  if ((bVar1 != 0x20) && ((0xd < bVar1 || ((0x3601U >> (bVar1 & 0x1f) & 1) == 0))))
                  {
                    if (bVar1 != 0x25) break;
                    do {
                      if ((*pbVar4 == 0xd) || (*pbVar4 == 10)) break;
                      pbVar4 = pbVar4 + 1;
                    } while (pbVar4 < pbVar2);
                  }
                  pbVar4 = pbVar4 + 1;
                } while (pbVar4 < pbVar2);
                puVar7 = local_60;
              }
              *param_1 = (longlong)pbVar4;
            } while (pbVar4 < pbVar5);
            local_48 = (byte *)0x0;
            iVar6 = 0;
            local_38 = 0;
            goto LAB_1805b1615;
          }
LAB_1805b1606:
          local_48 = (byte *)0x0;
          iVar6 = 0;
          local_38 = 0;
        }
LAB_1805b1615:
        *param_1 = (longlong)pbVar4;
        if (iVar6 == 0) break;
        if ((param_2 != (undefined4 *)0x0) && (puVar8 < puVar7)) {
          *puVar8 = (undefined4)local_48;
          puVar8[1] = local_48._4_4_;
          puVar8[2] = (undefined4)uStack_40;
          puVar8[3] = uStack_40._4_4_;
          *(ulonglong *)(puVar8 + 4) = CONCAT44(uStack_34,local_38);
        }
        pbVar5 = (byte *)param_1[2];
        puVar8 = puVar8 + 6;
        local_68 = (byte *)*param_1;
      } while (local_68 < pbVar5);
    }
    *param_4 = (int)(((longlong)puVar8 - (longlong)param_2) / 0x18);
    *param_1 = local_58;
    param_1[2] = local_50;
  }
  return;
}



