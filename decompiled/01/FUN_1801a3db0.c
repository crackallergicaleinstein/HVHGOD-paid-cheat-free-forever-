// FUN_1801a3db0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801a3db0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801a3db0(undefined1 (*param_1) [16])

{
  undefined8 **ppuVar1;
  ulonglong uVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  char ****ppppcVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  char ****ppppcVar10;
  char *pcVar11;
  ulonglong uVar12;
  undefined8 ***pppuVar13;
  undefined1 auStack_268 [48];
  undefined4 local_238;
  undefined1 local_230 [16];
  undefined1 local_220 [16];
  undefined8 ****local_208;
  undefined8 uStack_200;
  ulonglong uStack_1f8;
  ulonglong uStack_1f0;
  undefined1 (*local_1e8) [16];
  undefined8 ***local_1e0;
  undefined8 uStack_1d8;
  ulonglong uStack_1d0;
  ulonglong uStack_1c8;
  int iStack_1bc;
  longlong local_1b8;
  undefined1 local_1b0 [8];
  uint auStack_1a8 [14];
  longlong alStack_170 [12];
  undefined **local_110 [13];
  char ****local_a8 [2];
  longlong local_98;
  ulonglong local_90;
  longlong local_88;
  longlong local_80;
  char local_70;
  undefined8 ****local_68 [2];
  undefined8 local_58;
  ulonglong local_50;
  undefined1 local_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_1808d5f00 ^ (ulonglong)auStack_268;
  local_238 = 0;
  local_1e8 = param_1;
  if ((DAT_180ccaa18 & 1) == 0) {
    DAT_180ccaa18 = DAT_180ccaa18 | 1;
    atexit(FUN_180662190);
  }
  if (DAT_1808d7fa0 == 0) {
    FUN_18017ec20(local_48);
    cVar3 = FUN_1800a9120(local_48);
    if (cVar3 == '\0') {
      *param_1 = (undefined1  [16])0x0;
      *(undefined8 *)param_1[1] = 0;
      *(undefined8 *)(param_1[1] + 8) = 0xf;
      (*param_1)[0] = 0;
    }
    else {
      local_230 = (undefined1  [16])0x0;
      local_220 = ZEXT816(0);
      FUN_180159e60(local_230,L"synchronization-logo.png",0x18);
      local_238 = 6;
      FUN_1800a7e60(local_68,local_48,local_230);
      FUN_18015b930(local_230);
      local_208 = (undefined8 ****)&DAT_1807c27c0;
      uStack_200 = 0x1f30;
      FUN_1800ab8b0(&local_88,&local_208);
      if (local_70 == '\0') {
        *param_1 = (undefined1  [16])0x0;
        *(undefined8 *)param_1[1] = 0;
        *(undefined8 *)(param_1[1] + 8) = 0xf;
        (*param_1)[0] = 0;
      }
      else {
        FUN_18063ab10(&local_1b8,0,0x108);
        FUN_1800e6fe0(&local_1b8,local_68,0x30);
        FUN_1801ad380(&local_1b8,local_88,local_80 - local_88);
        lVar5 = FUN_180113da0(local_1b0);
        if (lVar5 == 0) {
          lVar5 = (longlong)*(int *)(local_1b8 + 4);
          uVar4 = 4;
          if (*(longlong *)((longlong)alStack_170 + lVar5) != 0) {
            uVar4 = 0;
          }
          uVar4 = uVar4 | *(uint *)((longlong)auStack_1a8 + lVar5) & 0x15 | 2;
          *(uint *)((longlong)auStack_1a8 + lVar5) = uVar4;
          uVar4 = uVar4 & *(uint *)((longlong)auStack_1a8 + lVar5 + 4);
          if (uVar4 != 0) {
            if ((uVar4 & 4) == 0) {
              pcVar11 = "ios_base::failbit set";
              if ((uVar4 & 2) == 0) {
                pcVar11 = "ios_base::eofbit set";
              }
            }
            else {
              pcVar11 = "ios_base::badbit set";
            }
            uVar9 = FUN_1801597e0(&local_208,1);
            FUN_1801596c0(&local_1e0,pcVar11,uVar9);
                    /* WARNING: Subroutine does not return */
            FUN_180606630(&local_1e0,&DAT_1808d0f18);
          }
        }
        if ((*(byte *)((longlong)auStack_1a8 + (longlong)*(int *)(local_1b8 + 4)) & 6) == 0) {
          local_208 = local_68;
          if (7 < local_50) {
            local_208 = local_68[0];
          }
          uStack_200 = local_58;
          FUN_1801a4fb0(local_a8);
          local_238 = 0x1e;
          ppppcVar10 = (char ****)local_a8;
          if (0xf < local_90) {
            ppppcVar10 = local_a8[0];
          }
          ppppcVar10 = (char ****)((longlong)ppppcVar10 + local_98);
          ppppcVar6 = (char ****)local_a8;
          if (0xf < local_90) {
            ppppcVar6 = local_a8[0];
          }
          if (ppppcVar6 != ppppcVar10) {
            do {
              if (*(char *)ppppcVar6 == '\\') {
                *(char *)ppppcVar6 = '/';
              }
              ppppcVar6 = (char ****)((longlong)ppppcVar6 + 1);
            } while (ppppcVar6 != ppppcVar10);
          }
          ppppcVar10 = (char ****)local_a8;
          if (0xf < local_90) {
            ppppcVar10 = local_a8[0];
          }
          local_230 = (undefined1  [16])0x0;
          local_220 = (undefined1  [16])0x0;
          FUN_18015ba30(local_230,ppppcVar10,local_98);
          puVar7 = (undefined8 *)FUN_180141490(local_230,0,"raw://",6);
          local_208 = (undefined8 ****)*puVar7;
          uStack_200 = puVar7[1];
          uStack_1f8 = puVar7[2];
          uStack_1f0 = puVar7[3];
          *(undefined1 *)puVar7 = 0;
          puVar7[2] = 0;
          puVar7[3] = 0xf;
          local_238 = 0x3e;
          local_1e0 = local_208;
          uStack_1d8 = uStack_200;
          uStack_1d0 = uStack_1f8;
          uStack_1c8 = uStack_1f0;
          FUN_18015c010(&DAT_1808d7f90);
          DAT_1808d7f90 = local_1e0;
          uRam00000001808d7f98 = uStack_1d8;
          DAT_1808d7fa0 = uStack_1d0;
          DAT_1808d7fa8 = uStack_1c8;
          uStack_1f8 = 0;
          uStack_1f0 = 0xf;
          local_208 = (undefined8 ****)((ulonglong)local_208 & 0xffffffffffffff00);
          FUN_18015c010(&local_208);
          FUN_18015c010(local_230);
          *param_1 = (undefined1  [16])0x0;
          *(undefined8 *)param_1[1] = 0;
          *(undefined8 *)(param_1[1] + 8) = 0;
          uVar2 = DAT_1808d7fa0;
          pppuVar13 = &DAT_1808d7f90;
          if (0xf < DAT_1808d7fa8) {
            pppuVar13 = DAT_1808d7f90;
          }
          if (0x7fffffffffffffff < DAT_1808d7fa0) {
                    /* WARNING: Subroutine does not return */
            FUN_18015bb70();
          }
          if (DAT_1808d7fa0 < 0x10) {
            *(ulonglong *)param_1[1] = DAT_1808d7fa0;
            *(undefined8 *)(param_1[1] + 8) = 0xf;
            ppuVar1 = pppuVar13[1];
            *(undefined8 ***)*param_1 = *pppuVar13;
            *(undefined8 ***)(*param_1 + 8) = ppuVar1;
          }
          else {
            uVar8 = DAT_1808d7fa0 | 0xf;
            uVar12 = 0x7fffffffffffffff;
            if ((uVar8 < 0x8000000000000000) && (uVar12 = uVar8, uVar8 < 0x16)) {
              uVar12 = 0x16;
            }
            uVar9 = FUN_18015bca0(uVar12 + 1);
            *(undefined8 *)*param_1 = uVar9;
            *(ulonglong *)param_1[1] = uVar2;
            *(ulonglong *)(param_1[1] + 8) = uVar12;
            FUN_18063aed0(uVar9,pppuVar13,uVar2 + 1);
          }
          local_238 = 0x3f;
          FUN_18015c010(local_a8);
          *(undefined ***)(local_1b0 + (longlong)*(int *)(local_1b8 + 4) + -8) =
               std::basic_ofstream<char,std::char_traits<char>_>::vftable;
          *(int *)(local_1b0 + (longlong)*(int *)(local_1b8 + 4) + -0xc) =
               *(int *)(local_1b8 + 4) + -0xa8;
          FUN_1800f63e0(local_1b0);
          *(undefined ***)(local_1b0 + (longlong)*(int *)(local_1b8 + 4) + -8) =
               std::basic_ostream<char,std::char_traits<char>_>::vftable;
          *(int *)(local_1b0 + (longlong)*(int *)(local_1b8 + 4) + -0xc) =
               *(int *)(local_1b8 + 4) + -0x10;
          local_110[0] = std::ios_base::vftable;
          std::ios_base::_Ios_base_dtor((ios_base *)local_110);
        }
        else {
          *param_1 = (undefined1  [16])0x0;
          *(undefined8 *)param_1[1] = 0;
          *(undefined8 *)(param_1[1] + 8) = 0xf;
          (*param_1)[0] = 0;
          local_238 = 7;
          *(undefined ***)(local_1b0 + (longlong)*(int *)(local_1b8 + 4) + -8) =
               std::basic_ofstream<char,std::char_traits<char>_>::vftable;
          *(int *)(local_1b0 + (longlong)*(int *)(local_1b8 + 4) + -0xc) =
               *(int *)(local_1b8 + 4) + -0xa8;
          FUN_1800f63e0(local_1b0);
          *(undefined ***)(local_1b0 + (longlong)*(int *)(local_1b8 + 4) + -8) =
               std::basic_ostream<char,std::char_traits<char>_>::vftable;
          *(int *)(local_1b0 + (longlong)*(int *)(local_1b8 + 4) + -0xc) =
               *(int *)(local_1b8 + 4) + -0x10;
          local_110[0] = std::ios_base::vftable;
          std::ios_base::_Ios_base_dtor((ios_base *)local_110);
        }
        if (local_70 != '\0') {
          FUN_180113710(&local_88);
        }
      }
      FUN_18015b930(local_68);
    }
    FUN_18015b930(local_48);
  }
  else {
    FUN_18015b360(param_1,&DAT_1808d7f90);
  }
}



