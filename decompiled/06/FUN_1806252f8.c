// FUN_1806252f8 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1806252f8 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1806252f8(DWORD *param_1,uint param_2,byte *param_3,ulonglong param_4,longlong param_5)

{
  char cVar1;
  byte bVar2;
  HANDLE hFile;
  char cVar3;
  uint nNumberOfBytesToWrite;
  BOOL BVar4;
  ulonglong uVar5;
  char *pcVar6;
  int iVar7;
  DWORD DVar8;
  undefined1 *puVar9;
  byte *pbVar10;
  int iVar11;
  longlong lVar12;
  undefined8 uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 auStackY_108 [32];
  undefined2 local_c8 [2];
  undefined4 local_c4;
  DWORD local_c0 [2];
  byte *local_b8;
  longlong local_b0;
  undefined8 local_a8;
  UINT local_a0;
  int local_9c;
  byte *local_98;
  longlong local_90;
  undefined8 local_88;
  undefined1 *local_80;
  byte *local_78;
  HANDLE local_70;
  longlong local_68;
  undefined8 local_60;
  undefined1 local_58 [8];
  byte local_50;
  byte local_4f;
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_60 = 0xfffffffffffffffe;
  local_40 = DAT_1808d5f00 ^ (ulonglong)auStackY_108;
  local_b0 = param_5;
  lVar15 = (longlong)(int)param_2 >> 6;
  uVar5 = (ulonglong)(param_2 & 0x3f);
  local_70 = *(HANDLE *)((&DAT_180bb2130)[lVar15] + 0x28 + uVar5 * 0x48);
  local_b8 = param_3 + (param_4 & 0xffffffff);
  local_98 = param_3;
  local_90 = lVar15;
  local_a0 = GetConsoleOutputCP();
  iVar11 = 0;
  if (*(char *)(local_b0 + 0x28) == '\0') {
    FUN_18060e230(local_b0);
  }
  local_9c = *(int *)(*(longlong *)(local_b0 + 0x18) + 0xc);
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_3 + (param_4 & 0xffffffff) <= local_98) {
  }
  DVar8 = 0;
  local_68 = lVar15;
  do {
    local_c8[0] = CONCAT11(local_c8[0]._1_1_,*param_3);
    local_c4 = 0;
    cVar3 = '\x01';
    if (local_9c == 0xfde9) {
      iVar7 = 0;
      lVar16 = 0;
      pcVar6 = (char *)(uVar5 * 0x48 + 0x3e + (&DAT_180bb2130)[local_68]);
      do {
        if (*pcVar6 == '\0') break;
        iVar7 = iVar7 + 1;
        lVar16 = lVar16 + 1;
        pcVar6 = pcVar6 + 1;
      } while (lVar16 < 5);
      if (lVar16 < 1) {
        cVar1 = (&DAT_1808d74b0)[*param_3];
        iVar7 = cVar1 + 1;
        lVar15 = (longlong)local_b8 - (longlong)param_3;
        if (lVar15 < iVar7) {
          if (0 < lVar15) {
            lVar16 = 0;
            do {
              *(byte *)(lVar16 + uVar5 * 0x48 + 0x3e + (&DAT_180bb2130)[local_90]) = param_3[lVar16]
              ;
              iVar11 = iVar11 + 1;
              lVar16 = lVar16 + 1;
            } while (iVar11 < lVar15);
          }
          param_1[1] = param_1[1] + (int)lVar15;
        }
        local_a8 = 0;
        cVar3 = (iVar7 == 4) + '\x01';
        local_78 = param_3;
        lVar15 = FUN_1806240a8(&local_c4,&local_78,cVar3,&local_a8);
        if (lVar15 == -1) {
        }
        pbVar10 = param_3 + cVar1;
        lVar15 = local_90;
      }
      else {
        cVar3 = (&DAT_1808d74b0)[*(byte *)((&DAT_180bb2130)[lVar15] + 0x3e + uVar5 * 0x48)];
        iVar7 = (cVar3 + 1) - iVar7;
        local_a8 = CONCAT44(local_a8._4_4_,iVar7);
        lVar12 = (longlong)local_b8 - (longlong)param_3;
        lVar14 = (longlong)iVar7;
        if (lVar12 < lVar14) {
          if (0 < lVar12) {
            lVar14 = lVar16;
            do {
              *(byte *)(lVar14 + uVar5 * 0x48 + 0x3e + (&DAT_180bb2130)[lVar15]) =
                   param_3[lVar14 - lVar16];
              iVar11 = iVar11 + 1;
              lVar14 = lVar14 + 1;
            } while (iVar11 < lVar12);
          }
          param_1[1] = param_1[1] + (int)lVar12;
        }
        lVar12 = 0;
        puVar9 = (undefined1 *)(uVar5 * 0x48 + 0x3e + (&DAT_180bb2130)[local_68]);
        do {
          local_58[lVar12] = *puVar9;
          lVar12 = lVar12 + 1;
          puVar9 = puVar9 + 1;
        } while (lVar12 < lVar16);
        if (0 < lVar14) {
          FUN_18063aed0(local_58 + lVar16,param_3,lVar14);
        }
        lVar12 = 0;
        do {
          *(undefined1 *)(lVar12 + uVar5 * 0x48 + 0x3e + (&DAT_180bb2130)[lVar15]) = 0;
          lVar12 = lVar12 + 1;
        } while (lVar12 < lVar16);
        local_88 = 0;
        local_80 = local_58;
        cVar3 = (cVar3 + 1 == 4) + '\x01';
        lVar16 = FUN_1806240a8(&local_c4,&local_80,cVar3,&local_88);
        if (lVar16 == -1) {
        }
        pbVar10 = param_3 + ((int)local_a8 + -1);
      }
    }
    else {
      lVar16 = (&DAT_180bb2130)[lVar15];
      bVar2 = *(byte *)(lVar16 + 0x3d + uVar5 * 0x48);
      if ((bVar2 & 4) == 0) {
        if (*(short *)(**(longlong **)(local_b0 + 0x18) + (ulonglong)*param_3 * 2) < 0) {
          pbVar10 = param_3 + 1;
          if (local_b8 <= pbVar10) {
            *(byte *)(lVar16 + 0x3e + uVar5 * 0x48) = *param_3;
            pbVar10 = (byte *)((&DAT_180bb2130)[lVar15] + 0x3d + uVar5 * 0x48);
            *pbVar10 = *pbVar10 | 4;
            param_1[1] = DVar8 + 1;
          }
          iVar7 = FUN_180623ba8(&local_c4,param_3,2,local_b0);
          if (iVar7 == -1) {
          }
          goto LAB_180625600;
        }
        uVar13 = 1;
        pbVar10 = param_3;
      }
      else {
        local_50 = *(byte *)(lVar16 + 0x3e + uVar5 * 0x48);
        local_4f = *param_3;
        *(byte *)(lVar16 + 0x3d + uVar5 * 0x48) = bVar2 & 0xfb;
        uVar13 = 2;
        pbVar10 = &local_50;
      }
      iVar7 = FUN_180623ba8(&local_c4,pbVar10,uVar13,local_b0);
      pbVar10 = param_3;
      if (iVar7 == -1) {
      }
    }
LAB_180625600:
    param_3 = pbVar10 + 1;
    nNumberOfBytesToWrite = FUN_18062b638(local_a0,0,&local_c4,cVar3);
    hFile = local_70;
    if (nNumberOfBytesToWrite == 0) {
    }
    local_c0[0] = 0;
    BVar4 = WriteFile(local_70,local_48,nNumberOfBytesToWrite,local_c0,(LPOVERLAPPED)0x0);
    if (BVar4 == 0) {
LAB_180625759:
      DVar8 = GetLastError();
      *param_1 = DVar8;
    }
    DVar8 = (param_1[2] - (int)local_98) + (int)param_3;
    param_1[1] = DVar8;
    if (local_c0[0] < nNumberOfBytesToWrite) {
    }
    if ((char)local_c8[0] == '\n') {
      local_c8[0] = 0xd;
      BVar4 = WriteFile(hFile,local_c8,1,local_c0,(LPOVERLAPPED)0x0);
      if (BVar4 == 0) goto LAB_180625759;
      if (local_c0[0] == 0) {
      }
      param_1[2] = param_1[2] + 1;
      param_1[1] = param_1[1] + 1;
      DVar8 = param_1[1];
    }
    if (local_b8 <= param_3) {
    }
  } while( true );
}



