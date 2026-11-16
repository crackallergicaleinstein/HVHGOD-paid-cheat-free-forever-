// FUN_18016d190 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18016d190 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18016d190(longlong param_1,longlong ******param_2)

{
  longlong *****ppppplVar1;
  longlong *****_Size;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 (*pauVar5) [16];
  undefined8 *puVar6;
  ULONGLONG UVar7;
  undefined8 *puVar8;
  longlong ******pppppplVar9;
  longlong ******pppppplVar10;
  undefined8 *puVar11;
  longlong *****ppppplVar12;
  undefined1 auStack_1e8 [32];
  undefined8 local_1c8;
  longlong ******local_1c0;
  longlong *****local_1b8;
  undefined8 *local_1a8;
  undefined8 *local_1a0;
  undefined1 local_188 [16];
  undefined1 auStack_178 [16];
  undefined8 local_168 [3];
  undefined1 local_150 [16];
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 auStack_120 [3];
  undefined8 local_108 [3];
  undefined1 local_f0 [16];
  undefined8 local_e0;
  undefined8 local_d8 [2];
  undefined8 local_c8;
  undefined1 local_c0 [16];
  undefined8 local_b0;
  undefined1 local_a8 [16];
  undefined8 local_98;
  undefined1 local_90 [8];
  undefined1 local_88 [32];
  longlong ******local_68 [2];
  longlong *****local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_1e8;
  puVar6 = *(undefined8 **)(param_1 + 0x30);
  puVar11 = *(undefined8 **)(param_1 + 0x28);
  if (puVar11 != puVar6) {
    ppppplVar12 = param_2[3];
    ppppplVar1 = param_2[2];
    do {
      pppppplVar10 = param_2;
      if ((longlong *****)0xf < ppppplVar12) {
        pppppplVar10 = (longlong ******)*param_2;
      }
      _Size = (longlong *****)puVar11[2];
      puVar8 = puVar11;
      if (0xf < (ulonglong)puVar11[3]) {
        puVar8 = (undefined8 *)*puVar11;
      }
    } while (((_Size != ppppplVar1) ||
             ((_Size != (longlong *****)0x0 &&
              (iVar3 = memcmp(puVar8,pppppplVar10,(size_t)_Size), iVar3 != 0)))) &&
            (puVar11 = puVar11 + 0x2d, puVar11 != puVar6));
    if (puVar11 != puVar6) {
      if (*(char *)((longlong)puVar11 + 0xe1) != '\0') {
        FUN_180113930(param_1 + 0x460,"Workshop configs are managed from the website.",0x2e);
      }
      FUN_180166570(local_68);
      if (local_58 == (longlong *****)0x0) {
        FUN_180113930(param_1 + 0x460,"Enter a config name.",0x14);
      }
      else if (*(char *)((longlong)puVar11 + 0xe3) == '\0') {
        if (*(char *)((longlong)puVar11 + 0xe2) == '\0') {
          FUN_180166490(local_108,local_68);
          local_1b8 = param_2[2];
          if (0x7fffffffffffffffU - (longlong)local_1b8 < 7) {
                    /* WARNING: Subroutine does not return */
            FUN_18015bb70();
          }
          local_1c0 = param_2;
          if ((longlong *****)0xf < param_2[3]) {
            local_1c0 = (longlong ******)*param_2;
          }
          local_1c8 = 7;
          FUN_18015a9c0(local_168);
          puVar6 = (undefined8 *)FUN_18015b2a0(local_168,&DAT_180700de4,1);
          local_138 = *puVar6;
          uStack_130 = puVar6[1];
          uStack_128 = puVar6[2];
          auStack_120[0] = puVar6[3];
          *(undefined1 *)puVar6 = 0;
          puVar6[2] = 0;
          puVar6[3] = 0xf;
          FUN_18015a6e0(local_88);
          cVar2 = FUN_18016e0a0(param_1,local_88);
          FUN_18015c010(local_88);
          FUN_18015c010(&local_138);
          FUN_18015c010(local_168);
          FUN_18015c010(local_108);
          if (cVar2 != '\0') {
            puVar6 = puVar11 + 4;
            *(undefined4 *)(param_1 + 0x4a4) = 3;
            if ((longlong ******)(param_1 + 0x4a8) != param_2) {
              pppppplVar10 = param_2 + 2;
              if ((longlong *****)0xf < param_2[3]) {
                param_2 = (longlong ******)*param_2;
              }
              FUN_180113930((longlong ******)(param_1 + 0x4a8),param_2,*pppppplVar10);
            }
            if ((longlong *******)(param_1 + 0x4c8) != local_68) {
              pppppplVar10 = (longlong ******)local_68;
              if (0xf < local_50) {
                pppppplVar10 = local_68[0];
              }
              FUN_180113930((longlong ******)(param_1 + 0x4c8),pppppplVar10,local_58);
            }
            if ((undefined8 *)(param_1 + 0x4e8) != puVar6) {
              if (0xf < (ulonglong)puVar11[7]) {
                puVar6 = (undefined8 *)*puVar6;
              }
              FUN_180113930((undefined8 *)(param_1 + 0x4e8),puVar6,puVar11[6]);
            }
            UVar7 = GetTickCount64();
            *(ULONGLONG *)(param_1 + 0x508) = UVar7;
          }
        }
        else {
          puVar6 = *(undefined8 **)(param_1 + 0x30);
          puVar11 = *(undefined8 **)(param_1 + 0x28);
          ppppplVar12 = local_58;
          if (puVar11 != puVar6) {
            pppppplVar10 = (longlong ******)(puVar11 + 4);
            do {
              pppppplVar9 = param_2;
              if ((longlong *****)0xf < param_2[3]) {
                pppppplVar9 = (longlong ******)*param_2;
              }
              ppppplVar1 = pppppplVar10[-2];
              puVar8 = puVar11;
              if ((longlong *****)0xf < pppppplVar10[-1]) {
                puVar8 = (undefined8 *)*puVar11;
              }
              if ((ppppplVar1 == param_2[2]) &&
                 (((ppppplVar1 == (longlong *****)0x0 ||
                   (iVar3 = memcmp(puVar8,pppppplVar9,(size_t)ppppplVar1), iVar3 == 0)) &&
                  ((longlong *******)pppppplVar10 != local_68)))) {
                pppppplVar9 = (longlong ******)local_68;
                if (0xf < local_50) {
                  pppppplVar9 = local_68[0];
                }
                FUN_180113930(pppppplVar10,pppppplVar9,ppppplVar12);
                ppppplVar12 = local_58;
              }
              puVar11 = puVar11 + 0x2d;
              pppppplVar10 = pppppplVar10 + 0x2d;
            } while (puVar11 != puVar6);
          }
          puVar6 = *(undefined8 **)(param_1 + 0x48);
          puVar11 = *(undefined8 **)(param_1 + 0x40);
          if (puVar11 != puVar6) {
            pppppplVar10 = (longlong ******)(puVar11 + 4);
            do {
              pppppplVar9 = param_2;
              if ((longlong *****)0xf < param_2[3]) {
                pppppplVar9 = (longlong ******)*param_2;
              }
              ppppplVar1 = pppppplVar10[-2];
              puVar8 = puVar11;
              if ((longlong *****)0xf < pppppplVar10[-1]) {
                puVar8 = (undefined8 *)*puVar11;
              }
              if (((ppppplVar1 == param_2[2]) &&
                  ((ppppplVar1 == (longlong *****)0x0 ||
                   (iVar3 = memcmp(puVar8,pppppplVar9,(size_t)ppppplVar1), iVar3 == 0)))) &&
                 ((longlong *******)pppppplVar10 != local_68)) {
                pppppplVar9 = (longlong ******)local_68;
                if (0xf < local_50) {
                  pppppplVar9 = local_68[0];
                }
                FUN_180113930(pppppplVar10,pppppplVar9,ppppplVar12);
                ppppplVar12 = local_58;
              }
              puVar11 = puVar11 + 0x2d;
              pppppplVar10 = pppppplVar10 + 0x2d;
            } while (puVar11 != puVar6);
          }
          FUN_180113930(param_1 + 0x460,"Dummy config renamed.",0x15);
          if (0x7fffffffffffffffU - (longlong)ppppplVar12 < 0xc) {
                    /* WARNING: Subroutine does not return */
            FUN_18015bb70();
          }
          local_1c0 = (longlong ******)local_68;
          if (0xf < local_50) {
            local_1c0 = local_68[0];
          }
          local_1c8 = 0xc;
          local_1b8 = ppppplVar12;
          FUN_18015a9c0(&local_1a8);
          pauVar5 = (undefined1 (*) [16])FUN_18015b2a0(&local_1a8,&DAT_180700f08,1);
          local_188 = *pauVar5;
          auStack_178 = pauVar5[1];
          (*pauVar5)[0] = 0;
          *(undefined8 *)pauVar5[1] = 0;
          *(undefined8 *)(pauVar5[1] + 8) = 0xf;
          FUN_18016df60(param_1,local_188,1);
          FUN_18015c010(local_188);
          FUN_18015c010(&local_1a8);
        }
      }
      else {
        FUN_1800e60e0(&local_138,"action");
        FUN_1800e60e0(auStack_120,"rename");
        local_1a8 = &local_138;
        local_1a0 = local_108;
        FUN_1800f4e90(local_d8,&local_1a8,1,2);
        local_c8 = 0;
        FUN_1800e60e0(local_168,&DAT_1806bc068);
        FUN_1800e64d0(local_150,param_2);
        local_140 = 0;
        local_1a8 = local_168;
        local_1a0 = &local_138;
        FUN_1800f4e90(local_c0,&local_1a8,1,2);
        local_b0 = 0;
        FUN_1800e60e0(local_108,&DAT_1806bd758);
        FUN_1800e64d0(local_f0,local_68);
        local_e0 = 0;
        local_1a8 = local_108;
        local_1a0 = local_d8;
        FUN_1800f4e90(local_a8,&local_1a8,1,2);
        local_98 = 0;
        local_1a8 = local_d8;
        local_1a0 = (undefined8 *)local_90;
        uVar4 = FUN_1800f4e90(local_188,&local_1a8,1,2);
        FUN_180172820(param_1,uVar4);
        _eh_vector_destructor_iterator_(local_d8,0x18,3,FUN_1800aab30);
        _eh_vector_destructor_iterator_(local_108,0x18,2,FUN_1800aab30);
        _eh_vector_destructor_iterator_(local_168,0x18,2,FUN_1800aab30);
        _eh_vector_destructor_iterator_(&local_138,0x18,2,FUN_1800aab30);
      }
      FUN_18015c010(local_68);
    }
  }
  FUN_180113930(param_1 + 0x460,"Config could not be found.",0x1a);
}



