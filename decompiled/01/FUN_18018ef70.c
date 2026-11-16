// FUN_18018ef70 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18018ef70 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18018ef70(undefined8 *param_1,undefined1 (*param_2) [16])

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  char cStack_10258;
  char cStack_10257;
  char cStack_10256;
  char cStack_10255;
  undefined4 uStack_10254;
  undefined8 uStack_10250;
  undefined1 uStack_10248;
  undefined1 auStack_10240 [16];
  longlong lStack_10230;
  longlong lStack_10228;
  undefined8 uStack_10220;
  char cStack_10218;
  undefined1 (*pauStack_10210) [16];
  uint uStack_10208;
  char cStack_10204;
  undefined8 uStack_10200;
  undefined8 uStack_101f8;
  undefined8 uStack_101f0;
  undefined8 uStack_101e8;
  undefined8 uStack_101e0;
  undefined8 uStack_101d8;
  undefined8 uStack_101d0;
  undefined8 uStack_101c8;
  undefined8 uStack_101c0;
  undefined8 uStack_101b8;
  undefined8 uStack_101b0;
  undefined8 uStack_101a8;
  undefined8 uStack_101a0;
  undefined8 uStack_10198;
  undefined8 uStack_10190;
  undefined8 uStack_10188;
  undefined8 uStack_10180;
  undefined8 uStack_10178;
  undefined8 uStack_10170;
  uint auStack_10168 [2];
  undefined8 uStack_10160;
  undefined1 uStack_10158;
  undefined1 auStack_10150 [16];
  undefined8 uStack_10140;
  undefined8 uStack_10138;
  longlong alStack_10128 [16];
  undefined1 auStack_100a8 [65648];
  
  *param_2 = (undefined1  [16])0x0;
  *(undefined8 *)*param_2 = 0;
  *(undefined8 *)(*param_2 + 8) = 0;
  *(undefined8 *)param_2[1] = 0;
  uStack_10254 = 1;
  alStack_10128[0] = 0;
  alStack_10128[1] = 0;
  alStack_10128[2] = 0;
  alStack_10128[3] = 0;
  alStack_10128[4] = 0;
  alStack_10128[5] = 0;
  alStack_10128[6] = 0;
  alStack_10128[7] = 0;
  alStack_10128[8] = 0;
  alStack_10128[9] = 0;
  alStack_10128[10] = 0;
  alStack_10128[0xb] = 0;
  alStack_10128[0xc] = 0;
  alStack_10128[0xd] = 0;
  alStack_10128[0xe] = 0;
  alStack_10128[0xf] = 0;
  uVar1 = *param_1;
  uVar2 = param_1[2];
  pauStack_10210 = param_2;
  cVar6 = FUN_1804513c0(uVar2,1,2);
  if (cVar6 == '\0') {
    cStack_10204 = '\0';
  }
  else {
    lVar10 = FUN_18017ea70();
    *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
    FUN_1801adfd0(&uStack_10208,uVar2,uVar1);
    lVar10 = FUN_18017ea70();
    if (*(int *)(lVar10 + 4) != 0) {
      *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
    }
  }
  uVar7 = uStack_10208;
  if (cStack_10204 == '\0') {
    uVar7 = 0;
  }
  if ((0 < (int)uVar7) && ((int)uVar7 < 0x11)) {
    lVar10 = (longlong)(int)uVar7;
    lStack_10228 = lVar10;
    if (0 < (int)uVar7) {
      lVar12 = 0;
      do {
        lVar3 = alStack_10128[lVar12];
        uStack_10200 = 0;
        uStack_101f8 = 0;
        uStack_101f0 = 0;
        uStack_101e8 = 0;
        uStack_101e0 = 0;
        uStack_101d8 = 0;
        uStack_101d0 = 0;
        uStack_101c8 = 0;
        uStack_101c0 = 0;
        uStack_101b8 = 0;
        uStack_101b0 = 0;
        uStack_101a8 = 0;
        uStack_101a0 = 0;
        uStack_10198 = 0;
        uStack_10190 = 0;
        uStack_10188 = 0;
        uStack_10180 = 0;
        uStack_10178 = 0;
        uStack_10170 = 0;
        if (lVar3 != 0) {
          lVar8 = FUN_18017ea70();
          *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
          cVar6 = FUN_1804514f0(&uStack_10200,lVar3,0x98);
          lVar8 = FUN_18017ea70();
          if (*(int *)(lVar8 + 4) != 0) {
            *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
          }
          if (cVar6 != '\0') {
            if ((0x5b < (int)uStack_101f8) && ((int)uStack_101f8 < 0x1005d)) {
              uStack_10160 = 0;
              uStack_10158 = 0;
              auStack_10150 = (undefined1  [16])0x0;
              uStack_10140 = 0;
              uVar1 = param_1[7];
              cVar6 = FUN_1804513c0(uVar1,1,2);
              if (cVar6 == '\0') {
                cStack_10218 = '\0';
              }
              else {
                lVar10 = FUN_18017ea70();
                *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
                FUN_1801ad7c0(&uStack_10220,uVar1,&uStack_101f0);
                lVar10 = FUN_18017ea70();
                if (*(int *)(lVar10 + 4) != 0) {
                  *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
                }
              }
              uStack_10160 = uStack_10220;
              if (cStack_10218 == '\0') {
                uStack_10160 = 0;
              }
              FUN_1801acf20(auStack_10150,(longlong)(int)uStack_101f8);
              uVar1 = uStack_10200;
              uVar2 = auStack_10150._0_8_;
              uVar5 = auStack_10150._8_8_;
              lVar10 = FUN_18017ea70();
              *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
              cVar6 = FUN_1804514f0(uVar2,uVar1,uVar5 - uVar2);
              lVar10 = FUN_18017ea70();
              uVar1 = uStack_10140;
              if (*(int *)(lVar10 + 4) != 0) {
                *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
              }
              if (cVar6 != '\0') {
                puVar4 = *(undefined8 **)(*param_2 + 8);
                if (puVar4 == *(undefined8 **)param_2[1]) {
                  FUN_1801b5b10(param_2,puVar4,&uStack_10160);
                }
                else {
                  *puVar4 = uStack_10160;
                  *(undefined1 *)(puVar4 + 1) = uStack_10158;
                  uStack_10140 = 0;
                  uVar5 = auStack_10150._8_8_;
                  uVar2 = auStack_10150._0_8_;
                  auStack_10150 = ZEXT816(0);
                  puVar4[2] = uVar2;
                  puVar4[3] = uVar5;
                  puVar4[4] = uVar1;
                  *(longlong *)(*param_2 + 8) = *(longlong *)(*param_2 + 8) + 0x28;
                }
              }
              FUN_180113710(auStack_10150);
              lVar10 = lStack_10228;
            }
          }
          FUN_1801a5f80(param_1[5],lVar3);
        }
        lVar12 = lVar12 + 1;
      } while (lVar12 < lVar10);
    }
  }
  iVar9 = 0;
  if (param_1[0x11] != 0) {
    do {
      auStack_10168[0] = 0;
      uVar1 = param_1[0x11];
      uVar2 = param_1[0x13];
      cVar6 = FUN_1804513c0(uVar2,1,2);
      if (cVar6 == '\0') {
        cStack_10257 = '\0';
      }
      else {
        lVar10 = FUN_18017ea70();
        *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
        FUN_1801ae020(&cStack_10258,uVar2,uVar1,auStack_10168);
        lVar10 = FUN_18017ea70();
        if (*(int *)(lVar10 + 4) != 0) {
          *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
        }
      }
      cVar6 = cStack_10258;
      if (cStack_10257 == '\0') {
        cVar6 = '\0';
      }
      if (cVar6 == '\0') {
      }
      FUN_18063ab10(auStack_100a8,0,0x1005c);
      uStack_10208 = 0;
      uStack_10138 = 0;
      uVar1 = param_1[0x11];
      uVar2 = param_1[0x14];
      cVar6 = FUN_1804513c0(uVar2,1,2);
      if (cVar6 == '\0') {
        cStack_10255 = '\0';
      }
      else {
        lVar10 = FUN_18017ea70();
        *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
        FUN_1801ae070(&cStack_10256,uVar2,uVar1,auStack_100a8);
        lVar10 = FUN_18017ea70();
        if (*(int *)(lVar10 + 4) != 0) {
          *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
        }
      }
      uVar7 = uStack_10208;
      cVar6 = cStack_10256;
      if (cStack_10255 == '\0') {
        cVar6 = '\0';
      }
      if (cVar6 == '\0') {
      }
      if ((auStack_10168[0] - 0x5c < 0x10001) && (uStack_10208 == auStack_10168[0])) {
        uStack_10250 = uStack_10138;
        uStack_10248 = 1;
        uVar11 = (ulonglong)uStack_10208;
        auStack_10240 = (undefined1  [16])0x0;
        lStack_10230 = 0;
        if (uStack_10208 != 0) {
          lVar10 = FUN_18015bca0(uStack_10208);
          auStack_10240._0_8_ = lVar10;
          lStack_10230 = lVar10 + uVar11;
          FUN_18063aed0(lVar10,auStack_100a8,uVar7);
          auStack_10240._8_8_ = lVar10 + uVar11;
        }
        lVar10 = lStack_10230;
        puVar4 = *(undefined8 **)(*param_2 + 8);
        if (puVar4 == *(undefined8 **)param_2[1]) {
          FUN_1801b5b10(param_2,puVar4,&uStack_10250);
        }
        else {
          *puVar4 = uStack_10250;
          *(undefined1 *)(puVar4 + 1) = uStack_10248;
          lStack_10230 = 0;
          uVar2 = auStack_10240._8_8_;
          uVar1 = auStack_10240._0_8_;
          auStack_10240 = ZEXT816(0);
          puVar4[2] = uVar1;
          puVar4[3] = uVar2;
          puVar4[4] = lVar10;
          *(longlong *)(*param_2 + 8) = *(longlong *)(*param_2 + 8) + 0x28;
        }
        FUN_180113710(auStack_10240);
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < 0x10);
  }
}



