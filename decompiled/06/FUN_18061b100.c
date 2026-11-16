// FUN_18061b100 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18061b100 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18061b100(longlong *param_1)

{
  UINT *pUVar1;
  byte bVar2;
  int *piVar3;
  undefined2 uVar4;
  int iVar5;
  BOOL BVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  undefined1 *puVar14;
  undefined8 *puVar15;
  BYTE *pBVar16;
  undefined8 *puVar17;
  undefined1 auStack_b8 [32];
  UINT *local_98;
  longlong local_90;
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined4 *local_68;
  uint local_60;
  longlong *local_58;
  undefined8 local_50;
  _cpinfo local_48;
  ulonglong local_30;
  
  local_30 = DAT_1808d5f00 ^ (ulonglong)auStack_b8;
  local_50 = 0;
  puVar7 = (undefined8 *)0x0;
  puVar8 = (undefined8 *)0x0;
  puVar9 = (undefined8 *)0x0;
  puVar10 = (undefined1 *)0x0;
  local_48.MaxCharSize = 0;
  local_48.DefaultChar[0] = '\0';
  local_48.DefaultChar[1] = '\0';
  local_48.LeadByte[0] = '\0';
  local_48.LeadByte[1] = '\0';
  local_48.LeadByte[2] = '\0';
  local_48.LeadByte[3] = '\0';
  local_48.LeadByte[4] = '\0';
  local_48.LeadByte[5] = '\0';
  local_48.LeadByte[6] = '\0';
  local_48.LeadByte[7] = '\0';
  local_48.LeadByte[8] = '\0';
  local_48.LeadByte[9] = '\0';
  local_48.LeadByte[10] = '\0';
  local_48.LeadByte[0xb] = '\0';
  local_48._18_2_ = 0;
  if (param_1[0x27] == 0) {
    piVar3 = (int *)param_1[0x20];
    if (piVar3 != (int *)0x0) {
      LOCK();
      *piVar3 = *piVar3 + -1;
      UNLOCK();
    }
    param_1[0x20] = 0;
    *param_1 = (longlong)&DAT_1806af460;
    param_1[0x22] = (longlong)&DAT_1806af6e0;
    param_1[0x23] = (longlong)&DAT_1806af860;
    param_1[0x21] = 0;
    *(undefined4 *)(param_1 + 1) = 1;
  }
  pUVar1 = (UINT *)((longlong)param_1 + 0xc);
  local_68 = (undefined4 *)0x0;
  local_58 = param_1;
  if ((*pUVar1 != 0) ||
     (local_98 = pUVar1, iVar5 = FUN_18062c62c(&local_58,0,param_1[0x27],0x1004), iVar5 == 0)) {
    local_68 = (undefined4 *)_calloc_base(1,4);
    FUN_180621380(0);
    puVar7 = (undefined8 *)_calloc_base(0x180,2);
    FUN_180621380(0);
    puVar8 = (undefined8 *)_calloc_base(0x180,1);
    FUN_180621380(0);
    puVar9 = (undefined8 *)_calloc_base(0x180,1);
    FUN_180621380(0);
    puVar10 = (undefined1 *)_calloc_base(0x101,1);
    FUN_180621380(0);
    if ((local_68 != (undefined4 *)0x0) &&
       ((((puVar7 != (undefined8 *)0x0 && (puVar10 != (undefined1 *)0x0)) &&
         (puVar8 != (undefined8 *)0x0)) && (puVar9 != (undefined8 *)0x0)))) {
      iVar5 = 0;
      puVar14 = puVar10;
      do {
        *puVar14 = (char)iVar5;
        puVar14 = puVar14 + 1;
        iVar5 = iVar5 + 1;
      } while (iVar5 < 0x100);
      BVar6 = GetCPInfo(*pUVar1,&local_48);
      if ((BVar6 != 0) && (local_48.MaxCharSize < 6)) {
        local_60 = (uint)(ushort)local_48.MaxCharSize;
        if (1 < local_60) {
          if (*(int *)((longlong)param_1 + 0xc) == 0xfde9) {
            FUN_18063ab10(puVar10 + 0x80,0x20,0x80);
          }
          else {
            pBVar16 = local_48.LeadByte;
            bVar2 = local_48.LeadByte[0];
            while ((bVar2 != 0 && (pBVar16[1] != 0))) {
              uVar13 = (uint)*pBVar16;
              if (*pBVar16 <= pBVar16[1]) {
                do {
                  lVar11 = (longlong)(int)uVar13;
                  uVar13 = uVar13 + 1;
                  puVar10[lVar11] = 0x20;
                } while ((int)uVar13 <= (int)(uint)pBVar16[1]);
              }
              pBVar16 = pBVar16 + 2;
              bVar2 = *pBVar16;
            }
          }
        }
        local_80 = *(undefined4 *)((longlong)param_1 + 0xc);
        local_90 = (longlong)puVar8 + 0x81;
        local_78 = 0;
        local_88 = 0xff;
        local_98 = (UINT *)CONCAT44(local_98._4_4_,0xff);
        iVar5 = __acrt_LCMapStringA(0,param_1[0x27],0x100,puVar10 + 1);
        if (iVar5 != 0) {
          local_80 = *(undefined4 *)((longlong)param_1 + 0xc);
          local_90 = (longlong)puVar9 + 0x81;
          local_78 = 0;
          local_88 = 0xff;
          local_98 = (UINT *)CONCAT44(local_98._4_4_,0xff);
          iVar5 = __acrt_LCMapStringA(0,param_1[0x27],0x200,puVar10 + 1);
          if (iVar5 != 0) {
            local_98 = (UINT *)(puVar7 + 0x20);
            local_88 = 0;
            local_90 = CONCAT44(local_90._4_4_,*(undefined4 *)((longlong)param_1 + 0xc));
            iVar5 = FUN_18062c7f4(0,1,puVar10,0x100);
            uVar13 = local_60;
            if (iVar5 != 0) {
              *(undefined2 *)((longlong)puVar7 + 0xfe) = 0;
              *(undefined1 *)((longlong)puVar8 + 0x7f) = 0;
              *(undefined1 *)((longlong)puVar9 + 0x7f) = 0;
              *(undefined1 *)(puVar8 + 0x10) = 0;
              *(undefined1 *)(puVar9 + 0x10) = 0;
              if (1 < local_60) {
                if (*(int *)((longlong)param_1 + 0xc) == 0xfde9) {
                  puVar15 = puVar9 + 0x20;
                  puVar17 = puVar7 + 0x40;
                  iVar5 = 0x80;
                  do {
                    if (iVar5 - 0xc2U < 0x33) {
                      uVar4 = 0x8000;
                    }
                    else {
                      uVar4 = 0;
                    }
                    *(undefined2 *)puVar17 = uVar4;
                    puVar17 = (undefined8 *)((longlong)puVar17 + 2);
                    *(char *)(((longlong)puVar8 - (longlong)puVar9) + (longlong)puVar15) =
                         (char)iVar5;
                    *(char *)puVar15 = (char)iVar5;
                    iVar5 = iVar5 + 1;
                    puVar15 = (undefined8 *)((longlong)puVar15 + 1);
                  } while (iVar5 < 0x100);
                }
                else {
                  pBVar16 = local_48.LeadByte;
                  bVar2 = local_48.LeadByte[0];
                  while ((bVar2 != 0 && (pBVar16[1] != 0))) {
                    uVar12 = (uint)*pBVar16;
                    if (*pBVar16 <= pBVar16[1]) {
                      do {
                        lVar11 = (longlong)(int)uVar12;
                        *(undefined2 *)((longlong)puVar7 + lVar11 * 2 + 0x100) = 0x8000;
                        *(char *)(lVar11 + 0x80 + (longlong)puVar8) = (char)uVar12;
                        *(char *)(lVar11 + 0x80 + (longlong)puVar9) = (char)uVar12;
                        uVar12 = uVar12 + 1;
                      } while ((int)uVar12 <= (int)(uint)pBVar16[1]);
                    }
                    pBVar16 = pBVar16 + 2;
                    bVar2 = *pBVar16;
                  }
                }
              }
              *puVar7 = puVar7[0x40];
              puVar7[1] = puVar7[0x41];
              puVar7[2] = puVar7[0x42];
              puVar7[3] = puVar7[0x43];
              puVar7[4] = puVar7[0x44];
              puVar7[5] = puVar7[0x45];
              puVar7[6] = puVar7[0x46];
              puVar7[7] = puVar7[0x47];
              puVar7[8] = puVar7[0x48];
              puVar7[9] = puVar7[0x49];
              puVar7[10] = puVar7[0x4a];
              puVar7[0xb] = puVar7[0x4b];
              puVar7[0xc] = puVar7[0x4c];
              puVar7[0xd] = puVar7[0x4d];
              puVar7[0xe] = puVar7[0x4e];
              puVar7[0xf] = puVar7[0x4f];
              puVar7[0x10] = puVar7[0x50];
              puVar7[0x11] = puVar7[0x51];
              puVar7[0x12] = puVar7[0x52];
              puVar7[0x13] = puVar7[0x53];
              puVar7[0x14] = puVar7[0x54];
              puVar7[0x15] = puVar7[0x55];
              puVar7[0x16] = puVar7[0x56];
              puVar7[0x17] = puVar7[0x57];
              puVar7[0x18] = puVar7[0x58];
              puVar7[0x19] = puVar7[0x59];
              puVar7[0x1a] = puVar7[0x5a];
              puVar7[0x1b] = puVar7[0x5b];
              puVar7[0x1c] = puVar7[0x5c];
              puVar7[0x1d] = puVar7[0x5d];
              puVar7[0x1e] = puVar7[0x5e];
              *(undefined4 *)(puVar7 + 0x1f) = *(undefined4 *)(puVar7 + 0x5f);
              *(undefined2 *)((longlong)puVar7 + 0xfc) = *(undefined2 *)((longlong)puVar7 + 0x2fc);
              *puVar8 = puVar8[0x20];
              puVar8[1] = puVar8[0x21];
              puVar8[2] = puVar8[0x22];
              puVar8[3] = puVar8[0x23];
              puVar8[4] = puVar8[0x24];
              puVar8[5] = puVar8[0x25];
              puVar8[6] = puVar8[0x26];
              puVar8[7] = puVar8[0x27];
              puVar8[8] = puVar8[0x28];
              puVar8[9] = puVar8[0x29];
              puVar8[10] = puVar8[0x2a];
              puVar8[0xb] = puVar8[0x2b];
              puVar8[0xc] = puVar8[0x2c];
              puVar8[0xd] = puVar8[0x2d];
              puVar8[0xe] = puVar8[0x2e];
              *(undefined4 *)(puVar8 + 0xf) = *(undefined4 *)(puVar8 + 0x2f);
              *(undefined2 *)((longlong)puVar8 + 0x7c) = *(undefined2 *)((longlong)puVar8 + 0x17c);
              *(undefined1 *)((longlong)puVar8 + 0x7e) = *(undefined1 *)((longlong)puVar8 + 0x17e);
              *puVar9 = puVar9[0x20];
              puVar9[1] = puVar9[0x21];
              puVar9[2] = puVar9[0x22];
              puVar9[3] = puVar9[0x23];
              puVar9[4] = puVar9[0x24];
              puVar9[5] = puVar9[0x25];
              puVar9[6] = puVar9[0x26];
              puVar9[7] = puVar9[0x27];
              puVar9[8] = puVar9[0x28];
              puVar9[9] = puVar9[0x29];
              puVar9[10] = puVar9[0x2a];
              puVar9[0xb] = puVar9[0x2b];
              *(undefined4 *)(puVar9 + 0xc) = *(undefined4 *)(puVar9 + 0x2c);
              *(undefined4 *)((longlong)puVar9 + 100) = *(undefined4 *)((longlong)puVar9 + 0x164);
              *(undefined4 *)(puVar9 + 0xd) = *(undefined4 *)(puVar9 + 0x2d);
              *(undefined4 *)((longlong)puVar9 + 0x6c) = *(undefined4 *)((longlong)puVar9 + 0x16c);
              puVar9[0xe] = puVar9[0x2e];
              *(undefined4 *)(puVar9 + 0xf) = *(undefined4 *)(puVar9 + 0x2f);
              *(undefined2 *)((longlong)puVar9 + 0x7c) = *(undefined2 *)((longlong)puVar9 + 0x17c);
              *(undefined1 *)((longlong)puVar9 + 0x7e) = *(undefined1 *)((longlong)puVar9 + 0x17e);
              piVar3 = (int *)param_1[0x20];
              if (piVar3 != (int *)0x0) {
                LOCK();
                iVar5 = *piVar3;
                *piVar3 = *piVar3 + -1;
                UNLOCK();
                if (iVar5 == 1) {
                  FUN_180621380(param_1[0x21] + -0xfe);
                  FUN_180621380(param_1[0x22] + -0x80);
                  FUN_180621380(param_1[0x23] + -0x80);
                  FUN_180621380(param_1[0x20]);
                }
              }
              *local_68 = 1;
              param_1[0x20] = (longlong)local_68;
              *param_1 = (longlong)(puVar7 + 0x20);
              param_1[0x21] = (longlong)puVar7 + 0xfe;
              param_1[0x22] = (longlong)(puVar8 + 0x10);
              param_1[0x23] = (longlong)(puVar9 + 0x10);
              *(uint *)(param_1 + 1) = uVar13;
              goto LAB_18061b6bb;
            }
          }
        }
      }
    }
  }
  FUN_180621380(local_68);
  FUN_180621380(puVar7);
  FUN_180621380(puVar8);
  FUN_180621380(puVar9);
LAB_18061b6bb:
  FUN_180621380(puVar10);
}



