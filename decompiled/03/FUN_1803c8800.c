// FUN_1803c8800 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803c8800 */

void FUN_1803c8800(longlong param_1,undefined8 *param_2)

{
  byte *pbVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  byte *pbVar6;
  longlong lVar7;
  longlong lVar8;
  byte bVar9;
  byte *pbVar10;
  byte bVar11;
  longlong *plVar12;
  byte local_78 [8];
  byte local_70 [33];
  uint7 uStack_4f;
  longlong local_48;
  
  local_48 = param_1;
  iVar5 = FUN_1805f68d0();
  if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (*(int *)(param_1 + 0x4c) == 0x7fffffff) {
    *(undefined4 *)(param_1 + 0x4c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  plVar12 = (longlong *)(param_1 + 0x50);
  if (plVar12 != (longlong *)(param_1 + 0x250)) {
    bVar11 = local_78[0];
    do {
      if (*plVar12 != 0) {
        cVar4 = FUN_1803c8a30();
        if (cVar4 != '\0') {
          if (*(char *)*param_2 != '\0') {
            lVar8 = param_2[1];
            plVar2 = (longlong *)param_2[2];
            cVar4 = FUN_1803c36b0(lVar8,plVar12[1],*(undefined4 *)(*plVar2 + 0x148),0,1);
            if (cVar4 != '\0') {
              pbVar10 = (byte *)*plVar2;
              if ((int)plVar12[2] == *(int *)(lVar8 + 0x990)) {
                if (*(int *)(pbVar10 + 0x134) != 0) {
                  pbVar10 = pbVar10 + 0x3c;
                }
              }
              else {
                pbVar10 = pbVar10 + 0xb4;
              }
              if (pbVar10 != pbVar10 + 0x3c) {
                pbVar6 = pbVar10 + 1;
                do {
                  if (pbVar6[-1] != 0) {
                    if (pbVar6[6] == 0) {
                      bVar9 = *pbVar6;
                      local_70[0] = 0;
                      local_70[1] = 2;
                      local_70[2] = 3;
                      local_70[3] = 4;
                      local_70[4] = 5;
                      local_70[5] = 6;
                      local_70[6] = 8;
                      local_70[7] = 9;
                      if (10 < bVar9) {
                        if (0x12 < bVar9) goto LAB_1803c891c;
                        bVar9 = local_70[bVar9 - 0xb];
                      }
                      if ((bVar9 != 6) || (pbVar6[0xe] == 0)) goto LAB_1803c891c;
                    }
                    bVar3 = true;
                    goto LAB_1803c892b;
                  }
LAB_1803c891c:
                  pbVar1 = pbVar6 + 0x13;
                  pbVar6 = pbVar6 + 0x14;
                } while (pbVar1 != pbVar10 + 0x3c);
              }
              bVar3 = false;
LAB_1803c892b:
              if (bVar3) goto LAB_1803c89de;
            }
          }
          lVar8 = *plVar12;
          lVar7 = FUN_18017ea70();
          *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
          bVar3 = false;
          if (lVar8 + 0x78 != 0) {
            local_78[0] = 0;
            cVar4 = FUN_1804514f0(local_78,lVar8 + 0x78,1);
            if (cVar4 == '\0') {
              bVar3 = false;
            }
            else {
              bVar3 = true;
              bVar11 = local_78[0];
            }
          }
          lVar8 = FUN_18017ea70();
          if (*(int *)(lVar8 + 4) != 0) {
            *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
          }
          if (bVar3) {
            local_78[0] = bVar11 & 0xf7 | *(byte *)(plVar12 + 3);
            lVar8 = *plVar12;
            if (lVar8 + 0x78 != 0) {
              lVar7 = FUN_18017ea70();
              *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
              FUN_1801ad7b0(lVar8 + 0x78,local_78);
              lVar8 = FUN_18017ea70();
              if (*(int *)(lVar8 + 4) != 0) {
                *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
              }
            }
          }
        }
        local_70[8] = 0;
        local_70[9] = 0;
        local_70[10] = 0;
        local_70[0xb] = 0;
        local_70[0xc] = 0;
        local_70[0xd] = 0;
        local_70[0xe] = 0;
        local_70[0xf] = 0;
        local_70[0x10] = 0;
        local_70[0x11] = 0;
        local_70[0x12] = 0;
        local_70[0x13] = 0;
        local_70[0x14] = 0;
        local_70[0x15] = 0;
        local_70[0x16] = 0;
        local_70[0x17] = 0;
        local_70[0x18] = 0;
        local_70[0x19] = 0;
        local_70[0x1a] = 0;
        local_70[0x1b] = 0;
        local_70[0x1c] = 0;
        local_70[0x1d] = 0;
        local_70[0x1e] = 0;
        local_70[0x1f] = 0;
        local_70[0x20] = 0;
        *plVar12 = 0;
        plVar12[1] = 0;
        plVar12[2] = 0;
        plVar12[3] = (ulonglong)uStack_4f << 8;
      }
LAB_1803c89de:
      plVar12 = plVar12 + 4;
    } while (plVar12 != (longlong *)(param_1 + 0x250));
  }
  FUN_1805f68fc(param_1);
  return;
}



