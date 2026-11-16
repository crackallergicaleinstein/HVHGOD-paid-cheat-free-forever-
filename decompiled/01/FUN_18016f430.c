// FUN_18016f430 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18016f430 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void FUN_18016f430(int *param_1,char *param_2,longlong *param_3,HANDLE param_4)

{
  longlong lVar1;
  undefined1 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  short *psVar6;
  char cVar7;
  int iVar8;
  DWORD DVar9;
  BOOL BVar10;
  short *psVar11;
  ULONGLONG UVar12;
  HANDLE Pipe;
  ULONGLONG UVar13;
  undefined8 uVar14;
  undefined1 *puVar15;
  undefined8 *******pppppppuVar16;
  LPCWSTR ******lpFileName;
  byte *pbVar17;
  char *pcVar18;
  ulonglong uVar19;
  longlong lVar20;
  ulonglong uVar21;
  short *psVar22;
  uint uVar23;
  ulonglong uVar24;
  bool bVar25;
  undefined1 auStackY_1d8 [32];
  int *local_198;
  undefined1 local_190 [16];
  ulonglong uStack_180;
  ulonglong uStack_178;
  undefined1 local_170;
  undefined1 *local_168;
  undefined1 local_160 [16];
  undefined1 auStack_150 [16];
  int *local_140 [2];
  longlong *local_130;
  HANDLE local_128;
  undefined1 local_120 [56];
  undefined8 local_e8;
  uint local_e0;
  ULONG local_dc;
  undefined8 *******local_d8 [2];
  ulonglong local_c8;
  ulonglong local_c0;
  char local_b8 [8];
  undefined1 local_b0 [8];
  LPCWSTR ******local_a8 [3];
  ulonglong local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulonglong local_50;
  
  local_50 = DAT_1808d5f00 ^ (ulonglong)auStackY_1d8;
  uVar19 = *(ulonglong *)(param_2 + 0x18);
  pcVar18 = param_2;
  if (0xf < uVar19) {
    pcVar18 = *(char **)param_2;
  }
  uVar21 = *(ulonglong *)(param_2 + 0x10);
  local_198 = param_1;
  local_140[0] = param_1;
  local_130 = param_3;
  if (((uVar21 < 0x16) || (iVar8 = memcmp(pcVar18,"hvhgod-internal-forks-",0x16), iVar8 != 0)) ||
     (uVar21 != 0x36)) {
LAB_18016fbbf:
    FUN_18015c090(local_190,"Private fork bridge is unavailable.");
                    /* WARNING: Subroutine does not return */
    FUN_180606630(local_190,&DAT_1808d12a8);
  }
  pbVar17 = (byte *)(pcVar18 + 0x16);
  lVar20 = 0x36;
  if (pbVar17 != (byte *)(pcVar18 + 0x36)) {
    do {
      iVar8 = isxdigit((uint)*pbVar17);
      if (iVar8 == 0) goto LAB_18016fbbf;
      pbVar17 = pbVar17 + 1;
    } while (pbVar17 != (byte *)(pcVar18 + 0x36));
    uVar19 = *(ulonglong *)(param_2 + 0x18);
    lVar20 = *(longlong *)(param_2 + 0x10);
  }
  if (uVar19 < 0x10) {
    pcVar18 = param_2;
  }
  else {
    pcVar18 = *(char **)param_2;
  }
  local_190 = (undefined1  [16])0x0;
  uStack_178 = 7;
  if (pcVar18 == pcVar18 + lVar20) {
    uStack_180 = 0;
    local_190._2_14_ = SUB1614((undefined1  [16])0x0,2);
    auVar3._14_2_ = 0;
    auVar3._0_14_ = local_190._2_14_;
    local_190 = auVar3 << 0x10;
  }
  else {
    uVar19 = (longlong)(pcVar18 + lVar20) - (longlong)pcVar18;
    uStack_180 = 0;
    if (0x7ffffffffffffffe < uVar19) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bb70();
    }
    if (uVar19 < 8) {
      local_190._0_8_ = (short *)0x0;
      psVar11 = (short *)local_190._0_8_;
    }
    else {
      uVar21 = uVar19 | 7;
      if (uVar21 < 0x7fffffffffffffff) {
        if (uVar21 < 10) {
          uVar21 = 10;
        }
        uVar24 = uVar21 + 1;
        if (0x7fffffffffffffff < uVar24) {
                    /* WARNING: Subroutine does not return */
          FUN_18015bc80();
        }
      }
      else {
        uVar21 = 0x7ffffffffffffffe;
        uVar24 = 0x7fffffffffffffff;
      }
      psVar11 = (short *)FUN_18015bca0(uVar24 * 2);
      local_190._0_8_ = psVar11;
      uStack_178 = uVar21;
    }
    uVar21 = uVar19;
    psVar6 = (short *)local_190;
    psVar22 = (short *)local_190;
    if (7 < uStack_178) {
      psVar6 = psVar11;
      psVar22 = psVar11;
    }
    for (; uVar21 != 0; uVar21 = uVar21 - 1) {
      *psVar6 = (short)*pcVar18;
      pcVar18 = pcVar18 + 1;
      psVar6 = psVar6 + 1;
    }
    uStack_180 = uVar19;
    psVar22[uVar19] = 0;
  }
  local_160 = (undefined1  [16])0x0;
  auStack_150 = (undefined1  [16])0x0;
  FUN_180159e60(local_160,L"\\\\.\\pipe\\",9);
  FUN_180178880(local_a8);
  FUN_18015b930(local_160);
  FUN_18015b930(local_190);
  UVar12 = GetTickCount64();
  while( true ) {
    lpFileName = (LPCWSTR ******)local_a8;
    if (7 < local_90) {
      lpFileName = local_a8[0];
    }
    Pipe = CreateFileW((LPCWSTR)lpFileName,0xc0000000,0,(LPSECURITY_ATTRIBUTES)0x0,3,0x40110000,
                       (HANDLE)0x0);
    local_128 = Pipe;
    if (((longlong)Pipe + 1U & 0xfffffffffffffffe) != 0) goto LAB_18016f6eb;
    DVar9 = GetLastError();
    if ((DVar9 != 0xe7) && (DVar9 != 2)) break;
    Sleep(0x14);
    if (((*param_3 != 0) && ((*(uint *)(*param_3 + 4) & 1) != 0)) ||
       (UVar13 = GetTickCount64(), UVar12 + 1000 <= UVar13)) break;
  }
  if (0xfffffffffffffffd < (longlong)Pipe - 1U) {
    FUN_18015c090(local_190,"Private fork bridge is unavailable. Try again shortly.");
                    /* WARNING: Subroutine does not return */
    FUN_180606630(local_190,&DAT_1808d12a8);
  }
LAB_18016f6eb:
  FUN_1800f4a50(local_b8,param_2 + 0x40);
  local_dc = 0;
  BVar10 = GetNamedPipeServerProcessId(Pipe,&local_dc);
  if (((BVar10 == 0) || (local_dc == 0)) || (DVar9 = FUN_180001910(), local_dc != DVar9)) {
    FUN_18015c090(local_190,"The Internal loader process did not match.");
                    /* WARNING: Subroutine does not return */
    FUN_180606630(local_190,&DAT_1808d12a8);
  }
  auStack_150._0_8_ = 0;
  auStack_150._8_8_ = 0xf;
  local_160._1_15_ = SUB1615((undefined1  [16])0x0,1);
  auVar4[0xf] = 0;
  auVar4._0_15_ = local_160._1_15_;
  local_160 = auVar4 << 8;
  if (local_b8[0] != '\x01') {
    local_140[0] = (int *)FUN_180112a50(local_b8);
    uVar14 = FUN_1800f6bd0(local_120,"cannot use value() with ",local_140);
    FUN_1800f6ca0(&local_88,0x132,uVar14);
                    /* WARNING: Subroutine does not return */
    FUN_180606630(&local_88,&DAT_1808d1050);
  }
  local_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  FUN_1800e6b50(local_b8,&local_88,"action");
  uVar14 = FUN_1800f3e20(local_b8,local_120);
  cVar7 = FUN_1800e6ca0(&local_88,uVar14);
  if (cVar7 == '\0') {
    uVar14 = FUN_1800f34a0(&local_88);
    FUN_1800e69c0(uVar14,local_190);
  }
  else {
    local_190 = local_160;
    uStack_180 = auStack_150._0_8_;
    uStack_178 = auStack_150._8_8_;
    auStack_150._0_8_ = 0;
    auStack_150._8_8_ = 0xf;
    auVar5[0xf] = 0;
    auVar5._0_15_ = local_160._1_15_;
    local_160 = auVar5 << 8;
  }
  puVar15 = local_190;
  if (0xf < uStack_178) {
    puVar15 = (undefined1 *)local_190._0_8_;
  }
  if (uStack_180 == 0xc) {
    iVar8 = memcmp(puVar15,"launch-proof",0xc);
    bVar25 = iVar8 == 0;
  }
  else {
    bVar25 = false;
  }
  FUN_18015c010(local_190);
  FUN_18015c010(local_160);
  if (bVar25) {
    if (((param_4 != (HANDLE)0x0) && (DVar9 = GetProcessId(param_4), DVar9 == local_dc)) &&
       (DVar9 = WaitForSingleObject(param_4,0), DVar9 == 0x102)) {
      local_198 = (int *)*param_3;
      if (local_198 != (int *)0x0) {
        LOCK();
        *local_198 = *local_198 + 1;
        UNLOCK();
      }
      cVar7 = FUN_18016f200(param_4,&local_198,UVar12 + 6000);
      if (cVar7 != '\0') goto LAB_18016f86f;
    }
    FUN_18015c090(local_190,"The Internal loader publisher did not match.");
                    /* WARNING: Subroutine does not return */
    FUN_180606630(local_190,&DAT_1808d12a8);
  }
LAB_18016f86f:
  local_168 = local_190;
  local_190 = ZEXT816(0);
  FUN_1801409d0(local_190 + 8,0);
  local_190[0] = 3;
  FUN_180111c50(&local_198,param_2 + 0x20);
  local_190._8_8_ = local_198;
  local_160 = (undefined1  [16])0x0;
  auStack_150 = ZEXT816(0);
  FUN_18015ba30(local_160,"owner",5);
  puVar15 = (undefined1 *)FUN_1800f43d0(local_b8,local_160);
  auVar3 = local_190;
  uVar2 = *puVar15;
  *puVar15 = local_190[0];
  local_190[0] = uVar2;
  auVar4 = local_190;
  uVar14 = *(undefined8 *)(puVar15 + 8);
  local_190._8_8_ = auVar3._8_8_;
  *(undefined8 *)(puVar15 + 8) = local_190._8_8_;
  local_190._0_8_ = auVar4._0_8_;
  local_190._8_8_ = uVar14;
  FUN_1801409d0(local_190 + 8,uVar2);
  FUN_1800f4710(local_b8,local_d8,0xffffffff);
  if (0x8000000 < local_c8) {
    FUN_18015c090(local_190,"Private fork request is too large.");
                    /* WARNING: Subroutine does not return */
    FUN_180606630(local_190,&DAT_1808d12a8);
  }
  local_e0 = (uint)local_c8;
  lVar20 = 61000;
  if (bVar25) {
    lVar20 = 6000;
  }
  local_198 = (int *)*param_3;
  if (local_198 != (int *)0x0) {
    LOCK();
    *local_198 = *local_198 + 1;
    UNLOCK();
  }
  cVar7 = FUN_18016e7e0(Pipe,&local_e0,4,1);
  if (cVar7 != '\0') {
    local_198 = (int *)*param_3;
    if (local_198 != (int *)0x0) {
      LOCK();
      *local_198 = *local_198 + 1;
      UNLOCK();
    }
    pppppppuVar16 = local_d8;
    if (0xf < local_c0) {
      pppppppuVar16 = local_d8[0];
    }
    cVar7 = FUN_18016e7e0(Pipe,pppppppuVar16,local_e0,1);
    if (cVar7 != '\0') {
      local_198 = (int *)*param_3;
      if (local_198 != (int *)0x0) {
        LOCK();
        *local_198 = *local_198 + 1;
        UNLOCK();
      }
      cVar7 = FUN_18016e7e0(Pipe,&local_e0,4,0);
      uVar19 = local_c8;
      if ((cVar7 != '\0') && (local_e0 != 0)) {
        uVar23 = 0x8000000;
        if (bVar25) {
          uVar23 = 0x200;
        }
        if (local_e0 <= uVar23) {
          uVar21 = (ulonglong)local_e0;
          if (local_c8 < local_e0) {
            uVar24 = uVar21 - local_c8;
            if (local_c0 - local_c8 < uVar24) {
              FUN_18013fa60(local_d8,uVar24,local_170,uVar24);
            }
            else {
              pppppppuVar16 = local_d8;
              if (0xf < local_c0) {
                pppppppuVar16 = local_d8[0];
              }
              lVar1 = (longlong)pppppppuVar16 + local_c8;
              local_c8 = uVar21;
              FUN_18063ab10(lVar1,0,uVar24);
              *(undefined1 *)((longlong)pppppppuVar16 + uVar24 + uVar19) = 0;
            }
          }
          else {
            pppppppuVar16 = local_d8;
            if (0xf < local_c0) {
              pppppppuVar16 = local_d8[0];
            }
            local_c8 = (ulonglong)local_e0;
            *(undefined1 *)((longlong)pppppppuVar16 + uVar21) = 0;
          }
          local_198 = (int *)*param_3;
          if (local_198 != (int *)0x0) {
            LOCK();
            *local_198 = *local_198 + 1;
            UNLOCK();
          }
          pppppppuVar16 = local_d8;
          if (0xf < local_c0) {
            pppppppuVar16 = local_d8[0];
          }
          cVar7 = FUN_18016e7e0(Pipe,pppppppuVar16,local_e0,0);
          if (cVar7 == '\0') {
            FUN_18015c090(local_190,"Private fork response did not complete.");
                    /* WARNING: Subroutine does not return */
            FUN_180606630(local_190,&DAT_1808d12a8);
          }
          if (((*param_3 == 0) || ((*(uint *)(*param_3 + 4) & 1) == 0)) &&
             (UVar13 = GetTickCount64(), UVar13 < lVar20 + UVar12)) {
            local_e8 = 0;
            FUN_180175670(local_140[0],local_d8,local_120,1);
            FUN_18015c010(local_d8);
            FUN_1801409d0(local_b0,local_b8[0]);
            CloseHandle(Pipe);
            FUN_18015b930(local_a8);
            FUN_18017cdd0(param_3);
          }
          FUN_18015c090(local_190,"Private fork response arrived after the deadline.");
                    /* WARNING: Subroutine does not return */
          FUN_180606630(local_190,&DAT_1808d12a8);
        }
      }
    }
  }
  FUN_18015c090(local_190,"Private fork request did not complete.");
                    /* WARNING: Subroutine does not return */
  FUN_180606630(local_190,&DAT_1808d12a8);
}



