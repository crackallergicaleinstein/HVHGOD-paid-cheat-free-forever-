// FUN_180374ee0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180374ee0 */

void FUN_180374ee0(void)

{
  float fVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  ULONGLONG UVar5;
  longlong lVar6;
  undefined *puVar7;
  bool bVar8;
  undefined1 auVar9 [64];
  undefined *local_28 [4];
  
  lVar6 = DAT_180bb88d0;
  if (DAT_180cc8be0 == '\0') {
    if (DAT_180902c30 != -1) {
      FUN_180376cc0();
    }
    DAT_180902c40 = 0xffffffff;
    DAT_180902cd0 = 0;
    DAT_180902cd8 = 0xffffffff;
    return;
  }
  if (DAT_180bb88d0 != 0) {
    if (DAT_180bb88d0 == 0) {
      bVar8 = false;
    }
    else {
      local_28[0] = (undefined *)0x0;
      lVar4 = FUN_18017ea70();
      *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + 1;
      cVar2 = FUN_1804514c0(local_28,lVar6,8);
      bVar8 = cVar2 != '\0';
      lVar6 = FUN_18017ea70();
      if (*(int *)(lVar6 + 4) != 0) {
        *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + -1;
      }
    }
    puVar7 = local_28[0];
    if (!bVar8) {
      puVar7 = (undefined *)0x0;
    }
    if (puVar7 != (undefined *)0x0) {
      iVar3 = DAT_180c6fac0;
      if (DAT_180c6fac0 != 0) {
LAB_18037504b:
        fVar1 = DAT_180902c44;
        if (puVar7 + iVar3 != (undefined *)0x0) {
          local_28[0] = (undefined *)((ulonglong)local_28[0] & 0xffffffff00000000);
          lVar6 = FUN_18017ea70();
          *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
          cVar2 = FUN_1804514c0(local_28,puVar7 + iVar3,4);
          if (cVar2 == '\0') {
            lVar6 = FUN_18017ea70();
            fVar1 = DAT_180902c44;
            if (*(int *)(lVar6 + 4) != 0) {
              *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + -1;
              fVar1 = DAT_180902c44;
            }
          }
          else {
            lVar6 = FUN_18017ea70();
            if (*(int *)(lVar6 + 4) != 0) {
              *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + -1;
            }
            fVar1 = local_28[0]._0_4_;
          }
        }
        auVar9 = ZEXT464((uint)fVar1);
        if (fVar1 != DAT_180902c44) {
          FUN_180376cc0();
          DAT_180902c44 = auVar9._0_4_;
        }
        FUN_180375c90(&DAT_180902c30);
        return;
      }
      UVar5 = GetTickCount64();
      if (DAT_180c6fab8 <= UVar5) {
        local_28[0] = &DAT_180901a60;
        iVar3 = FUN_1805f68d0(&DAT_180901a60);
        if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(5);
        }
        if (DAT_180901aac == 0x7fffffff) {
          DAT_180901aac = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(6);
        }
        if ((DAT_180c6fac0 == 0) && (DAT_180c6fab8 <= UVar5)) {
          DAT_180c6fac0 = FUN_1804174b0("C_CSGameRules",0xc262ee3c);
          DAT_180c6fab8 = 0xffffffffffffffff;
          if (DAT_180c6fac0 == 0) {
            DAT_180c6fab8 = UVar5 + 1000;
          }
        }
        iVar3 = DAT_180c6fac0;
        FUN_1805f68fc(&DAT_180901a60);
        if (iVar3 != 0) goto LAB_18037504b;
      }
      FUN_180374e20("round_start_schema");
    }
  }
  FUN_180376cc0();
  return;
}



