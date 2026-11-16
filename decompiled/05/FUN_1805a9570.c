// FUN_1805a9570 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805a9570 */

void FUN_1805a9570(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  ulonglong uVar5;
  byte *pbVar6;
  bool bVar7;
  int iVar8;
  undefined8 uVar9;
  int iVar10;
  uint uVar11;
  byte *pbVar12;
  int iVar13;
  int local_res10 [2];
  int local_res18;
  undefined8 *local_res20;
  
  local_res20 = *(undefined8 **)(param_1 + 0x2a0);
  pbVar4 = (byte *)param_2[2];
  (*(code *)param_2[7])(param_2);
  pbVar12 = (byte *)*param_2;
  if (pbVar12 < pbVar4) {
    bVar2 = *pbVar12;
    if ((9 < bVar2 - 0x30) && (bVar2 != 0x5b)) {
      if ((pbVar12 + 0x11 < pbVar4) &&
         (iVar8 = strncmp((char *)pbVar12,"StandardEncoding",0x10), iVar8 == 0)) {
        *(undefined4 *)(param_1 + 0x1e0) = 2;
        return;
      }
      if ((pbVar12 + 0xf < pbVar4) &&
         (iVar8 = strncmp((char *)pbVar12,"ExpertEncoding",0xe), iVar8 == 0)) {
        *(undefined4 *)(param_1 + 0x1e0) = 4;
        return;
      }
      if ((pbVar12 + 0x12 < pbVar4) &&
         (iVar8 = strncmp((char *)pbVar12,"ISOLatin1Encoding",0x11), iVar8 == 0)) {
        *(undefined4 *)(param_1 + 0x1e0) = 3;
        return;
      }
      *(undefined4 *)(param_2 + 3) = 0xa2;
      return;
    }
    uVar5 = param_2[4];
    puVar1 = param_2 + 0x16;
    bVar7 = false;
    if (bVar2 == 0x5b) {
      local_res18 = 0x100;
      bVar7 = true;
      *param_2 = (ulonglong)(pbVar12 + 1);
    }
    else {
      local_res18 = (*(code *)param_2[9])(param_2);
      if (0x100 < local_res18) goto LAB_1805a995a;
    }
    iVar8 = local_res18;
    (*(code *)param_2[7])(param_2);
    if ((byte *)*param_2 < pbVar4) {
      iVar13 = 0;
      if (*(longlong *)(param_1 + 0x1f8) != 0) {
        FUN_18057abd0(uVar5);
        *(undefined8 *)(param_1 + 0x1f8) = 0;
        FUN_18057abd0(uVar5,*(undefined8 *)(param_1 + 0x200));
        *(undefined8 *)(param_1 + 0x200) = 0;
        if ((code *)param_2[0x20] != (code *)0x0) {
          (*(code *)param_2[0x20])(puVar1);
        }
      }
      *(int *)(param_1 + 0x1e8) = iVar8;
      *(int *)(param_2 + 0x15) = iVar8;
      uVar9 = FUN_18057ac40(uVar5,2,0,iVar8,0,local_res10);
      *(undefined8 *)(param_1 + 0x1f8) = uVar9;
      if (local_res10[0] == 0) {
        uVar9 = FUN_18057ac40(uVar5,8,0,iVar8,0,local_res10);
        *(undefined8 *)(param_1 + 0x200) = uVar9;
        if ((local_res10[0] == 0) &&
           (local_res10[0] = (**(code **)*local_res20)(puVar1,iVar8,uVar5), local_res10[0] == 0)) {
          iVar10 = 0;
          local_res10[0] = 0;
          if (0 < iVar8) {
            do {
              (*(code *)param_2[0x1f])(puVar1,iVar10,".notdef",8);
              iVar10 = iVar10 + 1;
            } while (iVar10 < iVar8);
          }
LAB_1805a980f:
          do {
            (*(code *)param_2[7])(param_2);
            pbVar6 = (byte *)*param_2;
            if (pbVar4 <= pbVar6) goto LAB_1805a993e;
            bVar2 = *pbVar6;
            if (bVar2 == 100) {
              pbVar12 = pbVar6 + 3;
              if (((pbVar12 < pbVar4) && (pbVar6[1] == 0x65)) && (pbVar6[2] == 0x66)) {
                bVar3 = *pbVar12;
                if ((bVar3 == 0x20) || ((bVar3 < 0xe && ((0x3601U >> (bVar3 & 0x1f) & 1) != 0))))
                goto LAB_1805a993e;
                goto LAB_1805a9863;
              }
            }
            else {
LAB_1805a9863:
              if (bVar2 == 0x5d) {
                pbVar12 = pbVar6 + 1;
LAB_1805a993e:
                *(undefined4 *)(param_1 + 0x1e0) = 1;
                *param_2 = (ulonglong)pbVar12;
                return;
              }
            }
            pbVar12 = pbVar6;
            if (bVar2 - 0x30 < 10) {
              if (bVar7) goto LAB_1805a9893;
              iVar8 = (*(code *)param_2[9])(param_2);
              (*(code *)param_2[7])(param_2);
              pbVar12 = (byte *)*param_2;
              if (pbVar6 == pbVar12) goto LAB_1805a992d;
LAB_1805a98b8:
              if (((pbVar12 + 2 < pbVar4) && (*pbVar12 == 0x2f)) && (iVar13 < local_res18)) {
                pbVar12 = pbVar12 + 1;
                *param_2 = (ulonglong)pbVar12;
                (*(code *)param_2[8])(param_2);
                if (pbVar4 <= (byte *)*param_2) {
                  return;
                }
                if ((int)param_2[3] != 0) {
                  return;
                }
                uVar11 = (int)(byte *)*param_2 - (int)pbVar12;
                iVar10 = (*(code *)param_2[0x1f])(puVar1,iVar8,pbVar12,uVar11 + 1);
                *(int *)(param_2 + 3) = iVar10;
                if (iVar10 != 0) {
                  return;
                }
                iVar13 = iVar13 + 1;
                *(undefined1 *)
                 ((ulonglong)uVar11 + *(longlong *)(param_2[0x1a] + (longlong)iVar8 * 8)) = 0;
              }
              else if (bVar7) {
LAB_1805a992d:
                *(undefined4 *)(param_2 + 3) = 2;
                return;
              }
              goto LAB_1805a980f;
            }
            if (bVar7) {
LAB_1805a9893:
              iVar8 = iVar13;
              goto LAB_1805a98b8;
            }
            (*(code *)param_2[8])(param_2);
            if ((int)param_2[3] != 0) {
              return;
            }
          } while( true );
        }
      }
      *(int *)(param_2 + 3) = local_res10[0];
    }
  }
  else {
LAB_1805a995a:
    *(undefined4 *)(param_2 + 3) = 3;
  }
  return;
}



