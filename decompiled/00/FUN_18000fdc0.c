// FUN_18000fdc0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18000fdc0 */

undefined8 * FUN_18000fdc0(undefined8 *param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  NTSTATUS NVar10;
  BOOL BVar11;
  longlong lVar12;
  undefined8 ****ppppuVar13;
  ulonglong uVar14;
  LPSTR ***ppppCVar15;
  char *pcVar16;
  char **ppcVar17;
  longlong lVar18;
  PUCHAR pbBuffer;
  PUCHAR pUVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  LPSTR ****pppppCVar22;
  undefined8 *****pppppuVar23;
  DWORD *pcchString;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  char *local_c8;
  undefined8 uStack_c0;
  longlong local_b8;
  ulonglong uStack_b0;
  undefined8 *****local_a8;
  undefined8 uStack_a0;
  ulonglong local_98;
  ulonglong uStack_90;
  PUCHAR local_80;
  PUCHAR local_78;
  PUCHAR local_70;
  LPSTR ****local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  ulonglong uStack_50;
  DWORD local_44 [3];
  
  local_44[1] = 0xfffffffe;
  local_44[2] = 0xffffffff;
  uVar21 = param_3[1];
  if (0x8000000 < uVar21) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0xf;
    return param_1;
  }
  lVar18 = uVar21 + 0x1c;
  if (uVar21 < 0xfe4) {
    pbBuffer = (PUCHAR)FUN_180454770(lVar18);
  }
  else {
    lVar12 = FUN_180454770(uVar21 + 0x43);
    pbBuffer = (PUCHAR)(lVar12 + 0x27U & 0xffffffffffffffe0);
    *(longlong *)(pbBuffer + -8) = lVar12;
  }
  local_80 = pbBuffer;
  local_70 = pbBuffer + lVar18;
  FUN_18063ab10(pbBuffer,0,lVar18);
  local_78 = pbBuffer + lVar18;
  NVar10 = BCryptGenRandom((BCRYPT_ALG_HANDLE)0x0,pbBuffer,0xc,2);
  if (NVar10 < 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0xf;
  }
  else {
    local_98 = 0;
    uStack_90 = 0;
    local_a8 = (undefined8 *****)0x0;
    uStack_a0 = 0;
    uVar21 = param_3[1];
    if ((longlong)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bb70();
    }
    uVar1 = *param_3;
    if (uVar21 < 0x10) {
      pppppuVar23 = &local_a8;
      uVar20 = 0xf;
    }
    else {
      uVar14 = uVar21 | 0xf;
      uVar20 = 0x16;
      if (0x16 < uVar14) {
        uVar20 = uVar14;
      }
      if (uVar14 < 0xfff) {
        pppppuVar23 = (undefined8 *****)FUN_180454770(uVar20 + 1);
      }
      else {
        ppppuVar13 = (undefined8 ****)FUN_180454770(uVar20 + 0x28);
        pppppuVar23 = (undefined8 *****)((longlong)ppppuVar13 + 0x27U & 0xffffffffffffffe0);
        pppppuVar23[-1] = ppppuVar13;
      }
      local_a8 = pppppuVar23;
    }
    local_98 = uVar21;
    uStack_90 = uVar20;
    FUN_18063aed0(pppppuVar23,uVar1,uVar21);
    *(undefined1 *)((longlong)pppppuVar23 + uVar21) = 0;
    local_e8 = 0;
    uStack_e0 = 0;
    local_d8 = *param_2;
    uStack_d4 = param_2[1];
    uStack_d0 = param_2[2];
    uStack_cc = param_2[3];
    cVar9 = FUN_180010410(1,&local_d8,&local_80,&local_a8,&local_e8);
    if (cVar9 == '\0') {
LAB_180010003:
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0xf;
    }
    else {
      pppppuVar23 = &local_a8;
      if (0xf < uStack_90) {
        pppppuVar23 = local_a8;
      }
      FUN_18063ab10(pppppuVar23,0,local_98);
      local_44[0] = 0;
      pcchString = local_44;
      BVar11 = CryptBinaryToStringA
                         (local_80,(int)local_78 - (int)local_80,0x40000001,(LPSTR)0x0,pcchString);
      if (BVar11 == 0) goto LAB_180010003;
      uVar20 = (ulonglong)local_44[0];
      local_68 = (LPSTR ****)0x0;
      uStack_60 = 0;
      local_58 = 0;
      uStack_50 = 0;
      uVar21 = 0xf;
      pppppCVar22 = (LPSTR ****)&local_68;
      if (0xf < uVar20) {
        uVar14 = uVar20 | 0xf;
        uVar21 = 0x16;
        if (0x16 < uVar14) {
          uVar21 = uVar14;
        }
        if (uVar14 < 0xfff) {
          pppppCVar22 = (LPSTR ****)FUN_180454770(uVar21 + 1);
        }
        else {
          ppppCVar15 = (LPSTR ***)FUN_180454770(uVar21 + 0x28);
          pppppCVar22 = (LPSTR ****)((longlong)ppppCVar15 + 0x27U & 0xffffffffffffffe0);
          pppppCVar22[-1] = ppppCVar15;
        }
        local_68 = pppppCVar22;
      }
      local_58 = uVar20;
      uStack_50 = uVar21;
      FUN_18063ab10(pppppCVar22,0,uVar20);
      *(undefined1 *)((longlong)pppppCVar22 + uVar20) = 0;
      pppppCVar22 = (LPSTR ****)&local_68;
      if (0xf < uStack_50) {
        pppppCVar22 = local_68;
      }
      BVar11 = CryptBinaryToStringA
                         (local_80,(int)local_78 - (int)local_80,0x40000001,(LPSTR)pppppCVar22,
                          pcchString);
      if (BVar11 == 0) {
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 0xf;
      }
      else {
        uVar21 = (ulonglong)local_44[0];
        uVar20 = uVar21 - local_58;
        pppppCVar22 = local_68;
        if (uVar21 < local_58 || uVar20 == 0) {
          local_58 = uVar21;
          if (uStack_50 < 0x10) {
            pppppCVar22 = (LPSTR ****)&local_68;
          }
LAB_180010187:
          *(undefined1 *)((longlong)pppppCVar22 + uVar21) = 0;
        }
        else {
          if (uVar20 <= uStack_50 - local_58) {
            if (uStack_50 < 0x10) {
              pppppCVar22 = (LPSTR ****)&local_68;
            }
            lVar18 = (longlong)pppppCVar22 + local_58;
            local_58 = uVar21;
            FUN_18063ab10(lVar18,0);
            goto LAB_180010187;
          }
          FUN_180047ee0(&local_68,uVar20,uVar20,uVar20,(ulonglong)pcchString & 0xffffffffffffff00);
        }
        if (local_58 != 0) {
          if (uStack_50 < 0x10) {
            pppppCVar22 = (LPSTR ****)&local_68;
          }
          else {
            pppppCVar22 = local_68;
          }
          if (*(char *)((longlong)pppppCVar22 + (local_58 - 1)) == '\0') {
            lVar18 = local_58 - 1;
            local_58 = local_58 - 1;
            *(undefined1 *)((longlong)pppppCVar22 + lVar18) = 0;
          }
        }
        local_b8 = 0;
        uStack_b0 = 0;
        local_c8 = (char *)0x0;
        uStack_c0 = 0;
        pcVar16 = (char *)FUN_180454770(0x20);
        uVar21 = local_58;
        local_b8 = 0x11;
        uStack_b0 = 0x1f;
        builtin_strncpy(pcVar16,"HVHGOD-BRIDGE-V2\n",0x12);
        local_c8 = pcVar16;
        if (uStack_50 < 0x10) {
          pppppCVar22 = (LPSTR ****)&local_68;
          if (0xe < local_58) goto LAB_18001023a;
LAB_180010208:
          local_b8 = local_58 + 0x11;
          FUN_18063aed0(pcVar16 + 0x11,pppppCVar22);
          pcVar16[uVar21 + 0x11] = '\0';
          ppcVar17 = &local_c8;
        }
        else {
          pppppCVar22 = local_68;
          if (local_58 < 0xf) goto LAB_180010208;
LAB_18001023a:
          ppcVar17 = (char **)FUN_180048070(&local_c8,local_58);
        }
        uVar2 = *(undefined4 *)ppcVar17;
        uVar3 = *(undefined4 *)((longlong)ppcVar17 + 4);
        uVar4 = *(undefined4 *)(ppcVar17 + 1);
        uVar5 = *(undefined4 *)((longlong)ppcVar17 + 0xc);
        uVar6 = *(undefined4 *)((longlong)ppcVar17 + 0x14);
        uVar7 = *(undefined4 *)(ppcVar17 + 3);
        uVar8 = *(undefined4 *)((longlong)ppcVar17 + 0x1c);
        *(undefined4 *)(param_1 + 2) = *(undefined4 *)(ppcVar17 + 2);
        *(undefined4 *)((longlong)param_1 + 0x14) = uVar6;
        *(undefined4 *)(param_1 + 3) = uVar7;
        *(undefined4 *)((longlong)param_1 + 0x1c) = uVar8;
        *(undefined4 *)param_1 = uVar2;
        *(undefined4 *)((longlong)param_1 + 4) = uVar3;
        *(undefined4 *)(param_1 + 1) = uVar4;
        *(undefined4 *)((longlong)param_1 + 0xc) = uVar5;
        ppcVar17[2] = (char *)0x0;
        ppcVar17[3] = (char *)0xf;
        *(undefined1 *)ppcVar17 = 0;
        if (0xf < uStack_b0) {
          uVar21 = uStack_b0 + 1;
          if (0xfff < uVar21) {
            if ((char *)0x1f < local_c8 + (-8 - *(longlong *)(local_c8 + -8))) goto LAB_1800102f2;
            uVar21 = uStack_b0 + 0x28;
          }
          FUN_1804547d0(uVar2,uVar21);
        }
      }
      if (0xf < uStack_50) {
        uVar21 = uStack_50 + 1;
        pppppCVar22 = local_68;
        if (0xfff < uVar21) {
          pppppCVar22 = (LPSTR ****)local_68[-1];
          if (0x1f < (ulonglong)((longlong)local_68 + (-8 - (longlong)pppppCVar22)))
          goto LAB_1800102f2;
          uVar21 = uStack_50 + 0x28;
        }
        FUN_1804547d0(pppppCVar22,uVar21);
      }
    }
    if (0xf < uStack_90) {
      uVar21 = uStack_90 + 1;
      pppppuVar23 = local_a8;
      if (0xfff < uVar21) {
        pppppuVar23 = (undefined8 *****)local_a8[-1];
        if (0x1f < (ulonglong)((longlong)local_a8 + (-8 - (longlong)pppppuVar23)))
        goto LAB_1800102f2;
        uVar21 = uStack_90 + 0x28;
      }
      FUN_1804547d0(pppppuVar23,uVar21);
    }
    pbBuffer = local_80;
    if (local_80 == (PUCHAR)0x0) {
      return param_1;
    }
  }
  uVar21 = (longlong)local_70 - (longlong)pbBuffer;
  pUVar19 = pbBuffer;
  if (0xfff < uVar21) {
    pUVar19 = *(PUCHAR *)(pbBuffer + -8);
    if ((PUCHAR)0x1f < pbBuffer + (-8 - (longlong)pUVar19)) {
LAB_1800102f2:
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    uVar21 = uVar21 + 0x27;
  }
  FUN_1804547d0(pUVar19,uVar21);
  return param_1;
}



