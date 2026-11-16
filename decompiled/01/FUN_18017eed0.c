// FUN_18017eed0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18017eed0 */

ulonglong FUN_18017eed0(longlong *param_1)

{
  byte *pbVar1;
  char **ppcVar2;
  byte bVar3;
  char cVar4;
  char *pcVar5;
  char **ppcVar6;
  longlong lVar7;
  char *pcVar8;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  int iVar9;
  byte *pbVar10;
  ulonglong uVar11;
  ushort *_Buf1;
  char **ppcVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  undefined8 uVar16;
  char *local_128 [32];
  
  ppcVar6 = (char **)param_1[1];
  if ((((ppcVar6 != (char **)0x0) && (ppcVar6 < (char **)0x201)) &&
      (pcVar8 = (char *)*param_1, *pcVar8 != '/')) &&
     (((ppcVar6 < (char **)0x2 ||
       (pcVar5 = (char *)thunk_FUN_1805f9970(pcVar8,(char *)((longlong)ppcVar6 + (longlong)pcVar8),
                                             &DAT_1806be0f8,2),
       pcVar5 == (char *)((longlong)ppcVar6 + (longlong)pcVar8))) ||
      (ppcVar6 = (char **)(pcVar5 + -(longlong)pcVar8), ppcVar6 == (char **)0xffffffffffffffff)))) {
    lVar14 = *param_1;
    if ((((ulonglong)param_1[1] < 2) ||
        (lVar15 = param_1[1] + lVar14, lVar7 = thunk_FUN_1805f9970(lVar14,lVar15,&DAT_1807c242c,2),
        lVar7 == lVar15)) ||
       (ppcVar6 = (char **)(lVar7 - lVar14), ppcVar6 == (char **)0xffffffffffffffff)) {
      uVar16 = 10;
      ppcVar6 = (char **)FUN_18010fae0(*param_1,param_1[1]);
      if ((ppcVar6 == (char **)0xffffffffffffffff) &&
         ((uVar13 = param_1[1], uVar13 < 2 ||
          ((ppcVar6 = (char **)*param_1, *(short *)ppcVar6 != 0x2f2e &&
           (((uVar13 < 3 ||
             (pcVar8 = (char *)thunk_FUN_1805f9970(ppcVar6,(char *)((longlong)ppcVar6 + uVar13),
                                                   &DAT_1807c243c,3,uVar16),
             pcVar8 == (char *)((longlong)ppcVar6 + uVar13))) ||
            (ppcVar6 = (char **)(pcVar8 + -(longlong)ppcVar6),
            ppcVar6 == (char **)0xffffffffffffffff)))))))) {
        pbVar10 = (byte *)*param_1;
        pbVar1 = pbVar10 + param_1[1];
        for (; pbVar10 != pbVar1; pbVar10 = pbVar10 + 1) {
          bVar3 = *pbVar10;
          ppcVar6 = (char **)0x0;
          if (((bVar3 < 0x20) || (bVar3 == 0x7f)) ||
             (ppcVar6 = (char **)0x0, (byte)(bVar3 + 0xbf) < 0x1a)) goto LAB_18017f33e;
        }
        ppcVar12 = (char **)0x0;
        if (param_1[1] != 0) {
          do {
            ppcVar6 = (char **)param_1[1];
            lVar14 = *param_1;
            if ((ppcVar12 < ppcVar6) &&
               (ppcVar2 = (char **)(lVar14 + (longlong)ppcVar6),
               ppcVar6 = (char **)thunk_FUN_1805f7e70((char *)(lVar14 + (longlong)ppcVar12),ppcVar2,
                                                      0x2f), ppcVar6 != ppcVar2)) {
              lVar14 = (longlong)ppcVar6 - lVar14;
              lVar15 = lVar14;
              if (lVar14 == -1) goto LAB_18017f08c;
            }
            else {
              lVar15 = -1;
LAB_18017f08c:
              lVar14 = param_1[1];
            }
            if ((char **)param_1[1] < ppcVar12) {
                    /* WARNING: Subroutine does not return */
              FUN_18015ac40();
            }
            uVar11 = param_1[1] - (longlong)ppcVar12;
            _Buf1 = (ushort *)(*param_1 + (longlong)ppcVar12);
            uVar13 = lVar14 - (longlong)ppcVar12;
            if (uVar11 < (ulonglong)(lVar14 - (longlong)ppcVar12)) {
              uVar13 = uVar11;
            }
            if (uVar13 == 0) goto LAB_18017f33e;
            cVar4 = *(char *)((longlong)_Buf1 + (uVar13 - 1));
            ppcVar6 = (char **)0x0;
            if ((cVar4 == ' ') || (cVar4 == '.')) goto LAB_18017f33e;
            if (uVar13 == 0) {
              uVar11 = 0xffffffffffffffff;
            }
            else {
              ppcVar6 = (char **)thunk_FUN_1805f7e70(_Buf1,(char **)((longlong)_Buf1 + uVar13),0x2e)
              ;
              uVar11 = 0xffffffffffffffff;
              if (ppcVar6 != (char **)((longlong)_Buf1 + uVar13)) {
                uVar11 = (longlong)ppcVar6 - (longlong)_Buf1;
              }
            }
            if (uVar13 < uVar11) {
              uVar11 = uVar13;
            }
            if (uVar11 == 3) {
              iVar9 = *_Buf1 - 0x6f63;
              if (iVar9 == 0) {
                iVar9 = (byte)_Buf1[1] - 0x6e;
              }
              if (iVar9 == 0) goto LAB_18017f33e;
              iVar9 = memcmp(_Buf1,&DAT_1807c2440,3);
              ppcVar6 = (char **)CONCAT44(extraout_var,iVar9);
              if (iVar9 == 0) goto LAB_18017f33e;
              ppcVar6 = (char **)0x7561;
              iVar9 = *_Buf1 - 0x7561;
              if (iVar9 == 0) {
                iVar9 = (byte)_Buf1[1] - 0x78;
              }
              if (iVar9 == 0) goto LAB_18017f33e;
              ppcVar6 = (char **)0x756e;
              iVar9 = *_Buf1 - 0x756e;
              if (iVar9 == 0) {
                iVar9 = (byte)_Buf1[1] - 0x6c;
              }
              if (iVar9 == 0) goto LAB_18017f33e;
            }
            if (2 < uVar11) {
              iVar9 = *_Buf1 - 0x6f63;
              if (iVar9 == 0) {
                iVar9 = (byte)_Buf1[1] - 0x6d;
              }
              if (iVar9 != 0) {
                iVar9 = *_Buf1 - 0x706c;
                if (iVar9 == 0) {
                  iVar9 = (byte)_Buf1[1] - 0x74;
                }
                if (iVar9 != 0) goto LAB_18017f1bc;
              }
              if (uVar11 == 4) {
                ppcVar6 = (char **)0x0;
                if (('0' < *(char *)((longlong)_Buf1 + 3)) && (*(char *)((longlong)_Buf1 + 3) < ':')
                   ) goto LAB_18017f33e;
              }
            }
LAB_18017f1bc:
          } while ((lVar15 != -1) &&
                  (ppcVar12 = (char **)(lVar15 + 1), ppcVar12 < (char **)param_1[1]));
        }
        pcVar8 = (char *)param_1[1];
        local_128[0] = ".vmdl_c";
        ppcVar12 = local_128;
        local_128[1] = (char *)0x7;
        local_128[2] = ".vmat_c";
        local_128[4] = ".vtex_c";
        local_128[6] = ".vphys_c";
        local_128[8] = ".vseq_c";
        local_128[10] = ".vanim_c";
        local_128[0xc] = ".vagrp_c";
        local_128[0xe] = ".vanmgrph_c";
        local_128[0x10] = ".vnmgraph_c";
        local_128[0x12] = ".vnmskel_c";
        local_128[0x14] = ".vnmclip_c";
        local_128[0x16] = ".vcompmat_c";
        local_128[0x18] = ".vpcf_c";
        local_128[0x1a] = ".vsnap_c";
        local_128[0x1c] = ".vmesh_c";
        local_128[0x1e] = ".vmorf_c";
        local_128[3] = (char *)0x7;
        local_128[5] = (char *)0x7;
        local_128[7] = (char *)0x8;
        local_128[9] = (char *)0x7;
        local_128[0xb] = (char *)0x8;
        local_128[0xd] = (char *)0x8;
        local_128[0xf] = (char *)0xb;
        local_128[0x11] = (char *)0xb;
        local_128[0x13] = (char *)0xa;
        local_128[0x15] = (char *)0xa;
        local_128[0x17] = (char *)0xb;
        local_128[0x19] = (char *)0x7;
        local_128[0x1b] = (char *)0x8;
        local_128[0x1d] = (char *)0x8;
        local_128[0x1f] = (char *)0x8;
        do {
          pcVar5 = ppcVar12[1];
          if (pcVar5 <= pcVar8) {
            iVar9 = memcmp(pcVar8 + (*param_1 - (longlong)pcVar5),*ppcVar12,(size_t)pcVar5);
            if (iVar9 == 0) {
              return CONCAT71((int7)(CONCAT44(extraout_var_00,iVar9) >> 8),1);
            }
          }
          ppcVar12 = ppcVar12 + 2;
          ppcVar6 = local_128 + 0x20;
        } while (ppcVar12 != ppcVar6);
      }
    }
  }
LAB_18017f33e:
  return (ulonglong)ppcVar6 & 0xffffffffffffff00;
}



