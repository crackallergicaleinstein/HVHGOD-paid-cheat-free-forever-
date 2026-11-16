// FUN_1805248f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805248f0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1805248f0(longlong param_1,char *param_2)

{
  char cVar1;
  short sVar2;
  int iVar3;
  undefined8 uVar4;
  float *pfVar5;
  char *pcVar6;
  longlong lVar7;
  float *pfVar8;
  float *pfVar9;
  undefined1 extraout_var [56];
  float fVar10;
  undefined1 auVar11 [64];
  float fVar12;
  undefined1 auVar13 [64];
  float fVar14;
  undefined1 auStack_188 [32];
  float local_168 [2];
  undefined8 local_160;
  undefined *local_158;
  undefined1 local_150 [32];
  undefined1 local_130 [56];
  undefined1 local_f8 [56];
  undefined1 local_c0 [56];
  undefined1 local_88 [16];
  undefined1 auStack_78 [16];
  ulonglong local_68;
  
  local_68 = DAT_1808d5f00 ^ (ulonglong)auStack_188;
  local_158 = &DAT_1808e6940;
  iVar3 = FUN_1805f68d0(&DAT_1808e6940);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_1808e698c == 0x7fffffff) {
    DAT_1808e698c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  pfVar9 = (float *)(param_1 + 8);
  *pfVar9 = 1.5;
  *(undefined4 *)(param_1 + 0xc) = 0x3f4ccccd;
  *(undefined4 *)(param_1 + 0x10) = 0x3f4ccccd;
  *(undefined4 *)(param_1 + 0x14) = 0x3f4ccccd;
  *(undefined4 *)(param_1 + 0x18) = 0x3f800000;
  *(undefined2 *)(param_1 + 0x1c) = 1;
  if (*param_2 == '\x01') {
    local_88 = ZEXT816(0);
    auStack_78 = ZEXT816(0);
    FUN_1800e6b50(param_2,local_88,&DAT_180867888);
    uVar4 = FUN_1800f3e20(param_2,local_150);
    cVar1 = FUN_1800e6ca0(local_88,uVar4);
    if (cVar1 == '\0') {
      switch(*(char *)local_88._0_8_) {
      default:
        pcVar6 = (char *)local_88._0_8_;
        if (auStack_78._8_8_ != 0) {
          FUN_18015bae0(local_88,"cannot get value");
          FUN_1800f6e80(local_f8,0xd6,local_88);
                    /* WARNING: Subroutine does not return */
          FUN_180606630(local_f8,&DAT_1808d0fe8);
        }
        break;
      case '\x01':
        pcVar6 = (char *)(local_88._8_8_ + 0x40);
        break;
      case '\x02':
        pcVar6 = (char *)auStack_78._0_8_;
      }
      if (*pcVar6 != '\x04') {
        local_160 = FUN_180112a50(pcVar6);
        uVar4 = FUN_180156f00(local_150);
        FUN_1800f6ca0(local_130,0x12e,uVar4);
                    /* WARNING: Subroutine does not return */
        FUN_180606630(local_130,&DAT_1808d1050);
      }
      cVar1 = pcVar6[8];
    }
    else {
      cVar1 = '\0';
    }
    *(char *)(param_1 + 0x1d) = cVar1;
    auVar13._0_8_ = FUN_1800e9950(param_2,"scale",pfVar9);
    auVar13._8_56_ = extraout_var;
    auVar11 = ZEXT1664(auVar13._0_16_);
    *pfVar9 = (float)auVar13._0_8_;
    sVar2 = thunk_FUN_180624430();
    fVar14 = auVar11._0_4_;
    if (0 < sVar2) {
      *pfVar9 = 1.5;
      fVar14 = 1.5;
    }
    local_168[1] = 2.0;
    local_168[0] = 0.75;
    pfVar8 = local_168;
    if (0.75 <= fVar14) {
      pfVar8 = pfVar9;
    }
    pfVar5 = local_168 + 1;
    if (fVar14 <= 2.0) {
      pfVar5 = pfVar8;
    }
    *pfVar9 = *pfVar5;
    cVar1 = FUN_1800e6540(param_2,"accent");
    if (cVar1 != '\0') {
      local_88 = (undefined1  [16])0x0;
      auStack_78 = (undefined1  [16])0x0;
      FUN_18015ba30(local_88,"accent",6);
      pcVar6 = (char *)FUN_180113610(param_2,local_88);
      FUN_18015c010(local_88);
      if (*pcVar6 == '\x02') {
        local_88 = (undefined1  [16])0x0;
        auStack_78 = (undefined1  [16])0x0;
        FUN_18015ba30(local_88,"accent",6);
        uVar4 = FUN_180113610(param_2,local_88);
        FUN_18015c010(local_88);
        lVar7 = FUN_1800f3d40(uVar4);
        if (lVar7 == 4) {
          iVar3 = 0;
          auVar13 = ZEXT464(0x3f800000);
          fVar14 = 0.0;
          while (iVar3 < 4) {
            local_88 = (undefined1  [16])0x0;
            auStack_78 = (undefined1  [16])0x0;
            FUN_18015ba30(local_88,"accent",6);
            pcVar6 = (char *)FUN_180113610(param_2,local_88);
            FUN_18015c010(local_88);
            if (*pcVar6 != '\x02') {
              local_160 = FUN_180112a50(pcVar6);
              uVar4 = FUN_18010f410(local_150);
              FUN_1800f6ca0(local_c0,0x131,uVar4);
                    /* WARNING: Subroutine does not return */
              FUN_180606630(local_c0,&DAT_1808d1050);
            }
            lVar7 = (longlong)iVar3;
            local_168[0] = (float)FUN_1800e6880(lVar7 * 0x10 + **(longlong **)(pcVar6 + 8));
            fVar10 = local_168[0];
            sVar2 = thunk_FUN_180624430();
            fVar12 = auVar13._0_4_;
            if (sVar2 < 1) {
              local_160 = CONCAT44(local_160._4_4_,fVar12);
              local_168[1] = fVar14;
              pfVar9 = local_168 + 1;
              if (fVar14 <= fVar10) {
                pfVar9 = local_168;
              }
              pfVar8 = (float *)&local_160;
              if (fVar10 <= fVar12) {
                pfVar8 = pfVar9;
              }
              *(float *)(param_1 + 0xc + lVar7 * 4) = *pfVar8;
              iVar3 = iVar3 + 1;
            }
            else {
              *(float *)(param_1 + 0xc + lVar7 * 4) = fVar12;
              iVar3 = iVar3 + 1;
            }
          }
        }
      }
    }
  }
  FUN_1805f68fc(&DAT_1808e6940);
}



