// FUN_180026b80 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180026b80 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_180026b80(undefined4 *param_1)

{
  PUCHAR pUVar1;
  uint uVar2;
  ULONG cbInput;
  FARPROC pFVar3;
  LPCVOID lpBaseAddress;
  short *lpBuffer;
  PUCHAR pUVar4;
  BOOL BVar5;
  uint uVar6;
  uint uVar7;
  NTSTATUS NVar8;
  int iVar9;
  HANDLE pvVar10;
  ulonglong uVar11;
  PUCHAR pUVar12;
  longlong lVar13;
  FARPROC pFVar14;
  uint *puVar15;
  LPCSTR lpModuleName;
  ushort uVar16;
  SIZE_T nSize;
  ulonglong uVar17;
  longlong lVar18;
  bool bVar19;
  int local_1168 [15];
  uint local_112c;
  int aiStack_1118 [1004];
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  ushort *local_158;
  undefined8 local_150;
  PUCHAR *local_148;
  undefined8 local_140;
  ulonglong local_138;
  longlong local_130;
  HMODULE local_128;
  ushort local_120;
  undefined2 uStack_11e;
  undefined4 uStack_11c;
  undefined8 local_110;
  ulonglong local_108;
  short *local_100;
  longlong local_f8;
  uint *local_e8;
  uint *puStack_e0;
  undefined8 local_d8;
  uint *local_c8;
  uint *puStack_c0;
  undefined8 local_b8;
  ulonglong local_b0;
  PUCHAR local_a8;
  longlong lStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  PUCHAR local_80;
  longlong local_78;
  ulonglong local_70;
  BCRYPT_ALG_HANDLE local_68;
  BCRYPT_HASH_HANDLE pvStack_60;
  PUCHAR local_58;
  uint local_4c;
  undefined8 local_48;
  
  lpBaseAddress = DAT_180bacca8;
  local_48 = 0xfffffffffffffffe;
  if ((DAT_180bacca8 == (LPCVOID)0x0) || (*(longlong *)(param_1 + 2) != 0x40)) {
    return false;
  }
  FUN_18063ab10(local_1168,0,0x1000);
  local_80 = (PUCHAR)0x0;
  pvVar10 = GetCurrentProcess();
  BVar5 = ReadProcessMemory(pvVar10,lpBaseAddress,local_1168,0x1000,(SIZE_T *)&local_80);
  if (BVar5 == 0) {
    return false;
  }
  if (local_80 != (PUCHAR)0x1000) {
    return false;
  }
  if ((short)local_1168[0] != 0x5a4d) {
    return false;
  }
  if (local_112c - 0xef9 < 0xfffff147) {
    return false;
  }
  iVar9 = *(int *)((longlong)aiStack_1118 + (ulonglong)local_112c);
  if (iVar9 + 0xf7ffffffU < 0xf8000fff ||
      *(int *)((longlong)local_1168 + (ulonglong)local_112c) != 0x4550) {
    return false;
  }
  FUN_180176b20(&local_100,iVar9,&local_a8);
  lpBuffer = local_100;
  nSize = local_f8 - (longlong)local_100;
  pvVar10 = GetCurrentProcess();
  BVar5 = ReadProcessMemory(pvVar10,lpBaseAddress,lpBuffer,nSize,(SIZE_T *)&local_80);
  pUVar4 = local_80;
  if (((BVar5 != 0) && (local_80 == (PUCHAR)(local_f8 - (longlong)local_100))) &&
     (*local_100 == 0x5a4d)) {
    uVar7 = *(uint *)(local_100 + 0x1e);
    uVar11 = (ulonglong)uVar7;
    if (((0xfffff146 < uVar7 - 0xef9) && (*(int *)((longlong)local_100 + uVar11) == 0x4550)) &&
       ((*(short *)((longlong)local_100 + uVar11 + 0x18) == 0x20b &&
        ((*(short *)((longlong)local_100 + uVar11 + 0x14) == 0xf0 &&
         (uVar16 = *(ushort *)((longlong)local_100 + uVar11 + 6), 0xff9f < (ushort)(uVar16 - 0x61)))
        )))) {
      uVar6 = *(uint *)((longlong)local_100 + uVar11 + 0x50);
      local_58 = (PUCHAR)(ulonglong)uVar6;
      uVar2 = *(uint *)((longlong)local_100 + uVar11 + 0x54);
      uVar17 = (ulonglong)uVar2;
      if (((uVar6 < 0x8000001 && local_80 == local_58) && uVar2 <= uVar6) &&
         ((local_138 = uVar17, (ulonglong)uVar7 + (ulonglong)uVar16 * 0x28 + 0x108 <= uVar17 &&
          (puVar15 = (uint *)((longlong)local_100 + uVar11 + 0xb0), *puVar15 <= uVar6)))) {
        local_4c = 0;
        bVar19 = false;
        if (uVar6 - *puVar15 < *(uint *)((longlong)local_100 + uVar11 + 0xb4)) goto LAB_180026d93;
        local_130 = *(longlong *)((longlong)local_100 + uVar11 + 0x30) - (longlong)lpBaseAddress;
        local_e8 = (uint *)0x0;
        puStack_e0 = (uint *)0x0;
        local_d8 = 0;
        for (; uVar7 = *(uint *)((longlong)local_100 + uVar11 + 0xb4), uVar6 = uVar7 - local_4c,
            local_4c < uVar7; local_4c = local_4c + puVar15[1]) {
          if (uVar6 < 8) {
LAB_180026e9d:
            bVar19 = false;
            goto LAB_180026ea0;
          }
          uVar7 = *(uint *)((longlong)local_100 + uVar11 + 0xb0);
          uVar2 = *(uint *)((longlong)local_100 + (ulonglong)local_4c + 4 + (ulonglong)uVar7);
          bVar19 = false;
          if ((((ulonglong)uVar2 < 8) || (uVar6 < uVar2)) || ((uVar2 & 1) != 0)) goto LAB_180026ea0;
          puVar15 = (uint *)((longlong)local_100 + (ulonglong)local_4c + (ulonglong)uVar7);
          for (uVar17 = 0; uVar17 < (ulonglong)uVar2 - 8 >> 1; uVar17 = (ulonglong)((int)uVar17 + 1)
              ) {
            local_120 = *(ushort *)((longlong)puVar15 + uVar17 * 2 + 8) >> 0xc;
            if (local_120 != 0) {
              pUVar12 = (PUCHAR)((ulonglong)
                                 (*(ushort *)((longlong)puVar15 + uVar17 * 2 + 8) & 0xfff) +
                                (ulonglong)*puVar15);
              if (pUVar4 <= pUVar12) goto LAB_180026e9d;
              local_a8 = (PUCHAR)CONCAT44(local_a8._4_4_,(int)pUVar12);
              FUN_1800274b0(&local_e8,&local_a8);
            }
          }
        }
        local_c8 = (uint *)0x0;
        puStack_c0 = (uint *)0x0;
        local_b8 = 0;
        puVar15 = (uint *)((longlong)local_100 + uVar11 + 0x90);
        if (((uint)local_58 < *puVar15) ||
           (uVar7 = *(uint *)((longlong)local_100 + uVar11 + 0x94),
           (uint)local_58 - *puVar15 < uVar7)) {
LAB_180026ee3:
          bVar19 = false;
        }
        else {
          if (uVar7 != 0) {
            local_b0 = 0;
            while( true ) {
              local_70 = local_b0 & 0xffffffff;
              local_b0 = local_70 + 0x14;
              if (uVar7 < local_b0) break;
              local_78 = (ulonglong)*(uint *)((longlong)local_100 + uVar11 + 0x90) +
                         (longlong)local_100;
              uVar7 = *(uint *)(local_70 + 0xc + local_78);
              if ((ulonglong)uVar7 == 0) goto LAB_1800270df;
              if (*(int *)(local_78 + local_70) == 0) break;
              bVar19 = false;
              if ((*(int *)(local_78 + 0x10 + local_70) == 0) || ((uint)local_58 <= uVar7))
              goto LAB_180026ee6;
              lpModuleName = (LPCSTR)((ulonglong)uVar7 + (longlong)local_100);
              bVar19 = false;
              lVar13 = FUN_18063b630(lpModuleName,0,(uint)local_58 - uVar7);
              if (lVar13 == 0) goto LAB_180026ee6;
              local_128 = GetModuleHandleA(lpModuleName);
              local_4c = 0;
              if (local_128 == (HMODULE)0x0) break;
              while( true ) {
                pUVar12 = (PUCHAR)((ulonglong)*(uint *)(local_78 + local_70) +
                                  (ulonglong)local_4c * 8);
                pUVar1 = (PUCHAR)((ulonglong)*(uint *)(local_78 + 0x10 + local_70) +
                                 (ulonglong)local_4c * 8);
                bVar19 = false;
                if ((((pUVar4 < pUVar12) || ((ulonglong)((longlong)pUVar4 - (longlong)pUVar12) < 8))
                    || (pUVar4 < pUVar1)) || ((ulonglong)((longlong)pUVar4 - (longlong)pUVar1) < 8))
                goto LAB_180026ee6;
                local_a8 = *(PUCHAR *)((longlong)local_100 + (longlong)pUVar12);
                pFVar3 = *(FARPROC *)((longlong)local_100 + (longlong)pUVar1);
                if (local_a8 == (PUCHAR)0x0) break;
                if ((longlong)local_a8 < 0) {
                  pUVar12 = (PUCHAR)((ulonglong)local_a8 & 0xffff);
                }
                else {
                  uVar17 = (longlong)pUVar4 - (longlong)local_a8;
                  if ((pUVar4 < local_a8 || uVar17 == 0) || (uVar17 < 3)) goto LAB_180026ee3;
                  pUVar12 = (PUCHAR)((longlong)local_100 + (longlong)local_a8) + 2;
                  lVar13 = FUN_18063b630(pUVar12,0,uVar17 - 2);
                  if (lVar13 == 0) goto LAB_180026ee3;
                }
                pFVar14 = GetProcAddress(local_128,(LPCSTR)pUVar12);
                if ((pFVar14 == (FARPROC)0x0) || (pFVar3 != pFVar14)) goto LAB_180026ee3;
                local_120 = (ushort)pUVar1;
                uStack_11e = (undefined2)((ulonglong)pUVar1 >> 0x10);
                FUN_1800274e0(&local_c8,&local_120,&local_a8);
                local_4c = local_4c + 1;
              }
              if (pFVar3 != (FARPROC)0x0) break;
              uVar7 = *(uint *)((longlong)local_100 + uVar11 + 0x94);
            }
            goto LAB_180026ee3;
          }
LAB_1800270df:
          local_68 = (BCRYPT_ALG_HANDLE)0x0;
          pvStack_60 = (BCRYPT_HASH_HANDLE)0x0;
          bVar19 = false;
          NVar8 = BCryptOpenAlgorithmProvider(&local_68,L"SHA256",(LPCWSTR)0x0,0);
          if (-1 < NVar8) {
            bVar19 = false;
            NVar8 = BCryptCreateHash(local_68,&pvStack_60,(PUCHAR)0x0,0,(PUCHAR)0x0,0,0);
            if (-1 < NVar8) {
              bVar19 = false;
              NVar8 = BCryptHashData(pvStack_60,(PUCHAR)local_100,(ULONG)local_138,0);
              if (-1 < NVar8) {
                cbInput = *(ULONG *)((longlong)local_100 + uVar11 + 0xb4);
                if (cbInput == 0) {
                  bVar19 = true;
                }
                else {
                  NVar8 = BCryptHashData(pvStack_60,
                                         (PUCHAR)((ulonglong)
                                                  *(uint *)((longlong)local_100 + uVar11 + 0xb0) +
                                                 (longlong)local_100),cbInput,0);
                  bVar19 = -1 < NVar8;
                }
              }
            }
            uVar16 = 0;
            while (bVar19) {
              if (*(ushort *)((longlong)local_100 + uVar11 + 6) <= uVar16) {
                local_98 = 0;
                uStack_90 = 0;
                local_a8 = (PUCHAR)0x0;
                lStack_a0 = 0;
                bVar19 = false;
                NVar8 = BCryptFinishHash(pvStack_60,(PUCHAR)&local_a8,0x20,0);
                if (-1 < NVar8) {
                  local_168 = *param_1;
                  uStack_164 = param_1[1];
                  uStack_160 = param_1[2];
                  uStack_15c = param_1[3];
                  local_140 = 0x20;
                  local_148 = &local_a8;
                  FUN_180001790(&local_120,&local_148,0);
                  local_158 = &local_120;
                  if (0xf < local_108) {
                    local_158 = (ushort *)CONCAT44(uStack_11c,CONCAT22(uStack_11e,local_120));
                  }
                  local_150 = local_110;
                  iVar9 = FUN_18000d980(&local_158,&local_168);
                  bVar19 = iVar9 != 0;
                  thunk_FUN_18015c010(&local_120);
                }
                goto LAB_1800273ca;
              }
              bVar19 = true;
              if (0x1fffffff <
                  *(int *)((longlong)local_100 + (ulonglong)uVar16 * 0x28 + uVar11 + 300)) {
                lVar13 = (ulonglong)uVar16 * 0x28 + uVar11 + 0x108;
                uVar7 = *(uint *)((longlong)local_100 + lVar13 + 0x10);
                if ((ulonglong)uVar7 != 0) {
                  uVar6 = *(uint *)((longlong)local_100 + lVar13 + 0xc);
                  if (((uint)local_58 < uVar6) || ((uint)local_58 - uVar6 < uVar7)) break;
                  FUN_180027510(&local_a8,(ulonglong)uVar6 + (longlong)local_100,
                                (ulonglong)uVar7 + (ulonglong)uVar6 + (longlong)local_100);
                  bVar19 = true;
                  for (puVar15 = local_e8; puVar15 != puStack_e0; puVar15 = puVar15 + 2) {
                    uVar7 = *(uint *)((longlong)local_100 + lVar13 + 0xc);
                    if ((uVar7 <= *puVar15) &&
                       (lVar18 = (ulonglong)*puVar15 - (ulonglong)uVar7,
                       (uint)lVar18 < *(uint *)((longlong)local_100 + lVar13 + 0x10))) {
                      if (((short)puVar15[1] != 10) ||
                         ((ulonglong)((lStack_a0 - lVar18) - (longlong)local_a8) < 8)) {
                        bVar19 = false;
                        break;
                      }
                      *(longlong *)(local_a8 + lVar18) =
                           *(longlong *)(local_a8 + lVar18) + local_130;
                    }
                  }
                  for (puVar15 = local_c8; puVar15 != puStack_c0; puVar15 = puVar15 + 4) {
                    uVar7 = *(uint *)((longlong)local_100 + lVar13 + 0xc);
                    if ((uVar7 <= *puVar15) &&
                       (lVar18 = (ulonglong)*puVar15 - (ulonglong)uVar7,
                       (uint)lVar18 < *(uint *)((longlong)local_100 + lVar13 + 0x10))) {
                      if ((ulonglong)((lStack_a0 - lVar18) - (longlong)local_a8) < 8)
                      goto LAB_18002719d;
                      *(undefined8 *)(local_a8 + lVar18) = *(undefined8 *)(puVar15 + 2);
                    }
                  }
                  if (bVar19) {
                    NVar8 = BCryptHashData(pvStack_60,local_a8,(int)lStack_a0 - (int)local_a8,0);
                    bVar19 = -1 < NVar8;
                  }
                  else {
LAB_18002719d:
                    bVar19 = false;
                  }
                  thunk_FUN_180113710(&local_a8);
                }
              }
              uVar16 = uVar16 + 1;
            }
            bVar19 = false;
          }
LAB_1800273ca:
          FUN_1800275a0(&local_68);
        }
LAB_180026ee6:
        FUN_1800275d0(&local_c8);
LAB_180026ea0:
        FUN_1800275d0(&local_e8);
        goto LAB_180026d93;
      }
    }
  }
  bVar19 = false;
LAB_180026d93:
  thunk_FUN_180113710(&local_100);
  return bVar19;
}



