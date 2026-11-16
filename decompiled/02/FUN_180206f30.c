// FUN_180206f30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180206f30 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180206f30(undefined1 (*param_1) [16],undefined8 *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  longlong *_Buf2;
  size_t _Size;
  bool bVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  int iVar5;
  char *pcVar6;
  longlong lVar7;
  char cVar8;
  char cVar9;
  char **ppcVar10;
  ushort *puVar11;
  undefined1 (*pauVar12) [16];
  char *pcVar13;
  ushort *puVar14;
  ushort *_Buf1;
  undefined1 auStack_298 [32];
  undefined1 (*local_278) [16];
  char *local_268 [64];
  undefined1 local_68 [16];
  longlong lStack_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_298;
  uVar1 = param_2[1];
  local_278 = param_1;
  if (0xc < uVar1) {
    _Buf2 = (longlong *)*param_2;
    lVar7 = *_Buf2 + -0x6c706d6f74737563;
    if ((lVar7 == 0) && (lVar7 = (ulonglong)*(uint *)(_Buf2 + 1) - 0x72657961, lVar7 == 0)) {
      lVar7 = (ulonglong)*(byte *)((longlong)_Buf2 + 0xc) - 0x5f;
    }
    if (lVar7 == 0) {
      lVar7 = *(longlong *)((uVar1 - 10) + (longlong)_Buf2) + -0x7361625f70616d5f;
      if (lVar7 == 0) {
        lVar7 = (ulonglong)*(ushort *)((uVar1 - 2) + (longlong)_Buf2) - 0x6465;
      }
      if (lVar7 != 0) {
        if (((ulonglong)param_3[1] < 8) || (*(longlong *)*param_3 != 0x20746c7561666544)) {
          _Size = param_3[1];
          if ((_Size != uVar1) ||
             ((_Size != 0 && (iVar5 = memcmp((void *)*param_3,_Buf2,_Size), iVar5 != 0))))
          goto LAB_1802074e1;
        }
        _Buf1 = (ushort *)((longlong)_Buf2 + 0xd);
        pauVar12 = (undefined1 (*) [16])(uVar1 - 0xd);
        local_278 = pauVar12;
        if ((pauVar12 < (char *)0x8) ||
           (pcVar6 = (char *)thunk_FUN_1805f9970(_Buf1,(char *)((longlong)_Buf1 + (longlong)pauVar12
                                                               ),"_variant",8),
           pcVar6 == (char *)((longlong)_Buf1 + (longlong)pauVar12))) {
          pcVar6 = (char *)0xffffffffffffffff;
        }
        else {
          pcVar6 = pcVar6 + -(longlong)_Buf1;
        }
        pcVar13 = pcVar6;
        if (pauVar12 < pcVar6) {
          pcVar13 = (char *)pauVar12;
        }
        local_268[0] = "tm_leet";
        local_268[1] = (char *)0x7;
        local_268[2] = "Elite Crew";
        local_268[3] = (char *)0xa;
        local_268[4] = "tm_phoenix";
        local_268[5] = (char *)0xa;
        local_268[6] = "Phoenix Connexion";
        local_268[7] = (char *)0x11;
        local_268[8] = "tm_balkan";
        local_268[9] = (char *)0x9;
        local_268[10] = "Balkan";
        local_268[0xb] = (char *)0x6;
        local_268[0xc] = "tm_anarchist";
        local_268[0xd] = (char *)0xc;
        local_268[0xe] = "Anarchists";
        local_268[0xf] = (char *)0xa;
        local_268[0x10] = "tm_professional";
        local_268[0x11] = (char *)0xf;
        local_268[0x12] = "The Professionals";
        local_268[0x13] = (char *)0x11;
        local_268[0x14] = "tm_pirate";
        local_268[0x15] = (char *)0x9;
        local_268[0x16] = "Pirates";
        local_268[0x17] = (char *)0x7;
        local_268[0x18] = "tm_jungle_raider";
        local_268[0x19] = (char *)0x10;
        local_268[0x1a] = "Guerrilla Warfare";
        local_268[0x1b] = (char *)0x11;
        local_268[0x1c] = "ctm_sas";
        local_268[0x1d] = (char *)0x7;
        local_268[0x1e] = "SAS";
        local_268[0x1f] = (char *)0x3;
        local_268[0x20] = "ctm_fbi";
        local_268[0x21] = (char *)0x7;
        local_268[0x22] = "FBI";
        local_268[0x23] = (char *)0x3;
        local_268[0x24] = "ctm_st6";
        local_268[0x25] = (char *)0x7;
        local_268[0x26] = "SEAL Team 6";
        local_268[0x27] = (char *)0xb;
        local_268[0x28] = "ctm_swat";
        local_268[0x29] = (char *)0x8;
        local_268[0x2a] = "SWAT";
        local_268[0x2b] = (char *)0x4;
        local_268[0x2c] = "ctm_gendarmerie";
        local_268[0x2d] = (char *)0xf;
        local_268[0x2e] = "Gendarmerie Nationale";
        local_268[0x2f] = (char *)0x15;
        local_268[0x30] = "ctm_gign";
        local_268[0x31] = (char *)0x8;
        local_268[0x32] = "GIGN";
        local_268[0x33] = (char *)0x4;
        local_268[0x34] = "ctm_gsg9";
        local_268[0x35] = (char *)0x8;
        local_268[0x36] = "GSG 9";
        local_268[0x37] = (char *)0x5;
        local_268[0x38] = "ctm_idf";
        local_268[0x39] = (char *)0x7;
        local_268[0x3a] = "IDF";
        local_268[0x3b] = (char *)0x3;
        local_268[0x3c] = "ctm_diver";
        local_268[0x3d] = (char *)0x9;
        local_268[0x3e] = "SEAL Frogman";
        local_268[0x3f] = (char *)0xc;
        lStack_58 = 0;
        uStack_50 = 0xf;
        local_68._1_15_ = SUB1615((undefined1  [16])0x0,1);
        auVar3[0xf] = 0;
        auVar3._0_15_ = local_68._1_15_;
        local_68 = auVar3 << 8;
        ppcVar10 = local_268;
        while ((pcVar13 != ppcVar10[1] ||
               ((pcVar13 != (char *)0x0 &&
                (iVar5 = memcmp(_Buf1,*ppcVar10,(size_t)pcVar13), iVar5 != 0))))) {
          ppcVar10 = ppcVar10 + 4;
          if (ppcVar10 == (char **)local_68) {
LAB_1802073a6:
            puVar11 = _Buf1;
            if ((char *)0x2 < pcVar13) {
              iVar5 = *_Buf1 - 0x6d74;
              if (iVar5 == 0) {
                iVar5 = *(byte *)((longlong)_Buf2 + 0xf) - 0x5f;
              }
              if (iVar5 == 0) {
                pcVar13 = pcVar13 + -3;
                puVar11 = (ushort *)(_Buf2 + 2);
              }
              else if (((char *)0x3 < pcVar13) && (*(int *)_Buf1 == 0x5f6d7463)) {
                puVar11 = (ushort *)((longlong)_Buf2 + 0x11);
                pcVar13 = pcVar13 + -4;
              }
            }
            bVar2 = true;
            puVar14 = (ushort *)(pcVar13 + (longlong)puVar11);
            pauVar12 = local_278;
            for (; local_278 = pauVar12, puVar11 != puVar14;
                puVar11 = (ushort *)((longlong)puVar11 + 1)) {
              cVar8 = (char)*puVar11;
              if (cVar8 == '_') {
                bVar2 = true;
                cVar8 = ' ';
              }
              else {
                if ((bVar2) && ((byte)(cVar8 + 0x9fU) < 0x1a)) {
                  cVar8 = cVar8 + -0x20;
                }
                bVar2 = false;
              }
              FUN_18015af80(local_68,cVar8);
              pauVar12 = local_278;
            }
LAB_18020742e:
            if (pcVar6 != (char *)0xffffffffffffffff) {
              FUN_18015b2a0(local_68," (Variant ",10);
              pcVar6 = pcVar6 + 8;
              if (pauVar12 < pcVar6) {
                    /* WARNING: Subroutine does not return */
                FUN_18015ac40();
              }
              pcVar13 = (char *)((longlong)_Buf1 + (longlong)pcVar6);
              lVar7 = -1;
              if ((longlong)pauVar12 - (longlong)pcVar6 != -1) {
                lVar7 = (longlong)pauVar12 - (longlong)pcVar6;
              }
              pcVar6 = pcVar13 + lVar7;
              for (; pcVar13 != pcVar6; pcVar13 = pcVar13 + 1) {
                cVar8 = *pcVar13;
                cVar9 = cVar8 + -0x20;
                if (0x19 < (byte)(cVar8 + 0x9fU)) {
                  cVar9 = cVar8;
                }
                FUN_18015af80(local_68,cVar9);
              }
              FUN_18015af80(local_68,0x29);
            }
            *(undefined8 *)*param_1 = local_68._0_8_;
            *(undefined8 *)(*param_1 + 8) = local_68._8_8_;
            *(longlong *)param_1[1] = lStack_58;
            *(undefined8 *)(param_1[1] + 8) = uStack_50;
            lStack_58 = 0;
            uStack_50 = 0xf;
            auVar4[0xf] = 0;
            auVar4._0_15_ = local_68._1_15_;
            local_68 = auVar4 << 8;
            FUN_18015c010(local_68);
          }
        }
        FUN_180113930(local_68,ppcVar10[2],ppcVar10[3]);
        if (lStack_58 != 0) goto LAB_18020742e;
        goto LAB_1802073a6;
      }
    }
  }
LAB_1802074e1:
  *param_1 = (undefined1  [16])0x0;
  *(undefined8 *)param_1[1] = 0;
  *(undefined8 *)(param_1[1] + 8) = 0;
  FUN_18015ba30(param_1,*param_3,param_3[1]);
}



