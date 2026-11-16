// FUN_1806265b4 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1806265b4 */

int FUN_1806265b4(uint param_1,short *param_2,longlong param_3)

{
  byte *pbVar1;
  byte bVar2;
  longlong lVar3;
  HANDLE hFile;
  short *psVar4;
  BOOL BVar5;
  ulonglong uVar6;
  short *psVar7;
  short sVar8;
  short *psVar9;
  longlong lVar10;
  longlong lVar11;
  short local_res8 [4];
  short local_res10 [4];
  DWORD local_res18 [2];
  
  lVar10 = 0;
  uVar6 = (ulonglong)(param_1 & 0x3f);
  lVar11 = (longlong)(int)param_1 >> 6;
  lVar3 = (&DAT_180bb2130)[lVar11];
  hFile = *(HANDLE *)(lVar3 + 0x28 + uVar6 * 0x48);
  if ((param_3 == 0) || (*param_2 != 10)) {
    pbVar1 = (byte *)(lVar3 + 0x38 + uVar6 * 0x48);
    *pbVar1 = *pbVar1 & 0xfb;
  }
  else {
    pbVar1 = (byte *)(lVar3 + 0x38 + uVar6 * 0x48);
    *pbVar1 = *pbVar1 | 4;
  }
  psVar9 = param_2;
  psVar4 = param_2;
  do {
    if (param_2 + param_3 <= psVar4) goto LAB_18062678e;
    sVar8 = *psVar4;
    if (sVar8 == 0x1a) {
      bVar2 = *(byte *)((&DAT_180bb2130)[lVar11] + 0x38 + (ulonglong)(param_1 & 0x3f) * 0x48);
      if ((bVar2 & 0x40) != 0) {
        *psVar9 = 0x1a;
        goto LAB_18062678b;
      }
      *(byte *)((&DAT_180bb2130)[lVar11] + 0x38 + (ulonglong)(param_1 & 0x3f) * 0x48) = bVar2 | 2;
      goto LAB_18062678e;
    }
    psVar7 = psVar4 + 1;
    if (sVar8 == 0xd) {
      if (param_2 + param_3 <= psVar7) {
        local_res8[0] = 0;
        local_res18[0] = 0;
        BVar5 = ReadFile(hFile,local_res8,2,local_res18,(LPOVERLAPPED)0x0);
        if ((BVar5 == 0) || (local_res18[0] == 0)) {
LAB_180626752:
          *psVar9 = 0xd;
          goto LAB_18062678b;
        }
        if ((*(byte *)((&DAT_180bb2130)[lVar11] + 0x38 + uVar6 * 0x48) & 0x48) == 0) {
          if ((local_res8[0] != 10) || (psVar9 != param_2)) {
            FUN_1806262c4(param_1,0xfffffffffffffffe,1);
            if (local_res8[0] != 10) goto LAB_180626752;
            goto LAB_18062678e;
          }
        }
        else if (local_res8[0] != 10) {
          local_res10[0] = local_res8[0];
          *psVar9 = 0xd;
          do {
            *(undefined1 *)
             ((&DAT_180bb2130)[lVar11] + (ulonglong)(param_1 & 0x3f) * 0x48 + 0x3a + lVar10) =
                 *(undefined1 *)((longlong)local_res10 + lVar10);
            lVar10 = lVar10 + 1;
          } while (lVar10 < 2);
          *(undefined1 *)((&DAT_180bb2130)[lVar11] + 0x3c + (ulonglong)(param_1 & 0x3f) * 0x48) = 10
          ;
LAB_18062678b:
          psVar9 = psVar9 + 1;
LAB_18062678e:
          return (int)((longlong)psVar9 - (longlong)param_2 >> 1) * 2;
        }
        *psVar9 = 10;
        goto LAB_18062678b;
      }
      if (*psVar7 == 10) {
        psVar7 = psVar4 + 2;
        sVar8 = 10;
      }
    }
    *psVar9 = sVar8;
    psVar9 = psVar9 + 1;
    psVar4 = psVar7;
  } while( true );
}



