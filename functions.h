// keep this open at all times for autocomplete
#define between(x, y, z) y >= x AND y < z
#define between_(x, y, z) y > x AND y <= z
#define and2(a,b) a AND b
#define and3(a,b,c) a AND b AND c
#define and4(a,b,c,d) a AND b AND c AND d
#define and5(a,b,c,d,e) a AND b AND c AND d AND e
#define and6(a,b,c,d,e,f) a AND b AND c AND d AND e AND f
#define max2(x,y) IF(x>y,x,y)
#define max3(x,y,z) max2(max2(x,y),z)
#define max4(a,b,c,d) max2(max2(a,b),max2(c,d))
#define max5(a,b,c,d,e) max2(max4(a,b,c,d),e)
#define max6(a,b,c,d,e,f) max2(max4(a,b,c,d),max2(e,f))
#define min2(x,y) IF(x<y,x,y)
#define min3(x,y,z) min2(min2(x,y),z)
#define min4(a,b,c,d) min2(min2(a,b),min2(c,d))
#define min5(a,b,c,d,e) min2(min4(a,b,c,d),e)
#define min6(a,b,c,d,e,f) min2(min4(a,b,c,d),min2(e,f))
#define or2(a,b) (a OR b)
#define or3(a,b,c) (a OR b OR c)
#define or4(a,b,c,d) (a OR b OR c OR d)
#define or5(a,b,c,d,e) (a OR b OR c OR d OR e)
#define or6(a,b,c,d,e,f) (a OR b OR c OR d OR e OR f)
//
#define AM * 60
#define PM * 60 + 720
#define MINUTES * 60
#define and AND
#define or OR
#define not NOT
#define close AdjustedClosePrice(P1)
#define ask Ask(INSIDE, CURRENT, NO)
#define adr(x) AvgDailyRange(ALL_VENUES, x, NO)
#define adv(x) AvgDayVolume(ALL_VENUES, x, NO)
#define atr(x) ATRStock(ALL_VENUES, NO, DAILY, x, CURRENT)
#define atr_ext(x) ATRStock(ALL_VENUES, YES, DAILY, x, CURRENT)
#define avg(x,y) ((x+y)/2)
#define avg_open_size(x) AvgOpenPrintSize(x)
#define avg_volume_till_now(x) (AvgDayVolume(ALL_VENUES, x, NO)/390) * (TimeFromStockOpenSeconds/60)
#define bid Bid(INSIDE, CURRENT, NO)
#define change_from_entry PositionDelta(ALL_VENUES, NO)
#define unadjusted_close ClosePrice(PRIMARY, P1, NO)
#define day_bar_close(x, y) DayBar_Close(ALL_VENUES, x, YES, y)
#define day_bar_low(x, y) DayBar_Low(ALL_VENUES, x, YES, y)
#define day_bar_high(x, y) DayBar_High(ALL_VENUES, x, YES, y)
#define day_bar_volume(x, y) DayBar_Volume(ALL_VENUES, x, YES, y)
#define day_high DayHigh(ALL_VENUES,1,CURRENT,NO)
#define day_low DayLow(ALL_VENUES,1,CURRENT,NO)
#define day_high_ext DayHigh(ALL_VENUES,1,CURRENT,YES)
#define day_low_ext DayLow(ALL_VENUES,1,CURRENT,YES)
#define day_high_prv(x) DayHigh(ALL_VENUES,1,x,NO)
#define day_low_prv(x) DayLow(ALL_VENUES,1,x,NO)
#define day_high_ext_prv(x) DayHigh(ALL_VENUES,1,x,YES)
#define day_low_ext_prv(x) DayLow(ALL_VENUES,1,x,YES)
#define day_range (DayHigh(ALL_VENUES,1,CURRENT,NO) - DayLow(ALL_VENUES,1,CURRENT,NO))
#define day_range_ext (DayHigh(ALL_VENUES,1,CURRENT,YES)- DayLow(ALL_VENUES,1,CURRENT,YES))
#define day_range_prv(x) (DayHigh(ALL_VENUES,1,x,NO) - DayLow(ALL_VENUES,1,x,NO))
#define day_range_ext_prv(x) (DayHigh(ALL_VENUES,1,x,YES)-DayLow(ALL_VENUES,1,x,YES))
#define day_volume DayVolume(ALL_VENUES,1,CURRENT,NO)
#define entries EntriesCount(HOURS, 8)
#define entry_time_sec PositionEntryTime
#define entry_trigs_day EntryTriggersCount(HOURS, 8)
#define entry_trigs_sec(x) EntryTriggersCount(SECONDS, x)
#define entry_trigs_min(x) EntryTriggersCount(MINUTES, x)
#define entry_trigs_hr(x) EntryTriggersCount(HOURS, x)
#define ETF EXCHANGE_TRADED_FUND
#define ETN EXCHANGE_TRADED_NOTE
#define execution ExecutionPrice
#define instrument_type(x) IsInstrumentType(x)
#define is_halted IsHalt
#define is_hard_to_borrow IsHardToBorrow
#define last Last(ALL_VENUES,CURRENT,NO)
#define minimum_days_from_ipo(x) (DaysFromIPO > x OR DaysFromIPO < 0)
#define minute_high(x) MinuteHigh(ALL_VENUES, x, CURRENT, NO, False)
#define minute_low(x) MinuteLow(ALL_VENUES, x, CURRENT, NO, False)
#define minute_range(x) (MinuteHigh(ALL_VENUES, x, CURRENT, NO, False) - MinuteLow(ALL_VENUES, x, CURRENT, NO, False))
#define minute_high_I_prv(x, y) MinuteHigh_I(ALL_VENUES, x, y, NO, False)
#define minute_low_I_prv(x, y) MinuteLow_I(ALL_VENUES, x, y, NO, False)
#define higher_lows_P1_P5(x) MinuteLow_I(ALL_VENUES, x, P4, NO, False) > MinuteLow_I(ALL_VENUES, x, P5, NO, False) AND MinuteLow_I(ALL_VENUES, x, P3, NO, False) > MinuteLow_I(ALL_VENUES, x, P4, NO, False) AND MinuteLow_I(ALL_VENUES, x, P2, NO, False) > MinuteLow_I(ALL_VENUES, x, P3, NO, False) AND MinuteLow_I(ALL_VENUES, x, P1, NO, False) > MinuteLow_I(ALL_VENUES, x, P2, NO, False)
#define lower_highs_P1_P5(x) MinuteHigh_I(ALL_VENUES, x, P4, NO, False) < MinuteHigh_I(ALL_VENUES, x, P5, NO, False) AND MinuteHigh_I(ALL_VENUES, x, P3, NO, False) < MinuteHigh_I(ALL_VENUES, x, P4, NO, False) AND MinuteHigh_I(ALL_VENUES, x, P2, NO, False) < MinuteHigh_I(ALL_VENUES, x, P3, NO, False) AND MinuteHigh_I(ALL_VENUES, x, P1, NO, False) < MinuteHigh_I(ALL_VENUES, x, P2, NO, False)
#define minute_high_ext_dv(x) MinuteHigh(ALL_VENUES, x, CURRENT, YES, True)
#define minute_low_ext_dv(x) MinuteLow(ALL_VENUES, x, CURRENT, YES, True)
#define minute_range_ext_dv(x) (MinuteHigh(ALL_VENUES, x, CURRENT, YES, True) - MinuteLow(ALL_VENUES, x, CURRENT, YES, True))
#define minute_high_ext(x) MinuteHigh(ALL_VENUES, x, CURRENT, YES, False)
#define minute_low_ext(x) MinuteLow(ALL_VENUES, x, CURRENT, YES, False)
#define minute_range_ext(x) (MinuteHigh(ALL_VENUES, x, CURRENT, YES, False) - MinuteLow(ALL_VENUES, x, CURRENT, YES, False))
#define min_range_p1_p5(x) day_range_prv(P1) > x and day_range_prv(P2) > x and day_range_prv(P3) > x and day_range_prv(P4) > x and day_range_prv(P5) > x
#define min_vol_p1_p5(x) volume(P1) > x AND volume(P2) > x AND volume(P3) > x AND volume(P4) > x AND volume(P5) > x
#define new_high NewDayHigh(1, NO)
#define new_low NewDayLow(1, NO)
#define open OpenPrice(PRIMARY, CURRENT, NO)
#define post_close_volume DayBar_VolumeP(ALL_VENUES, 1, YES, '16:05-19:59', P1)
#define pre_mkt_perc_chg ((day_bar_close(1, '08:00-09:26') - close)/close)
#define pre_mkt_volume DayBar_Volume(ALL_VENUES, 1, YES, '04:00-09:27')
#define price_delta(x) PriceDelta(ALL_VENUES, x, NO)
#define time_minute TickTime
#define time_sec TickTimeSeconds
#define time_in_position_sec time_sec - entry_time_sec
#define time_from_open TimeFromStockOpenSeconds // use with MINUTES
#define time_from_open_sec TimeFromStockOpenSeconds
#define time_from_open_minutes (TimeFromStockOpenSeconds/60)
#define volume(x) DayVolume(ALL_VENUES, 1, x, NO)
// news
#define has_earnings (EarningsNewsEvent(News_Current,ACBO,True,Any) or Source3(News_Current, ACBO, AnySentiment, Earnings))
#define has_earnings_AC (EarningsNewsEvent(News_P1, AfterClose, True, Any) or Source3(News_P1, AfterClose, AnySentiment, Earnings))
#define has_earnings_BO (EarningsNewsEvent(News_Current, BeforeOpen, True,  Any) or Source3(News_Current, BeforeOpen, AnySentiment, Earnings))
#define option_news Option_News
#define managment_change Mgmt_Changes
#define s3(x) Source3(News_Current, ACBO, AnySentiment, x)
#define conference_call_mkt_hrs ConferenceCall(News_Current, MarketHours, Any)
#define briefing_news StockNewsEvent(News_Current, ACBO, True)
#define source3_news Source3(News_Current, ACBO, AnySentiment, AnyNewsType)
#define fly_news StockNews(News_Current, ACBO, AnySentiment, AnyNewsType)
#define has_news (source3_news or fly_news or briefing_news)
#define has_no_news (NOT has_news)

// functions of functions
#define ref_stock_n(x, y) RefStockNumericValue(x, y)
#define ref_stock_l(x, y)  RefStockLogicalValue(x, y)
#define r_adr(x, y) ref_stock_n(x, adr(y))
#define r_briefing_news(x) ref_stock_l(x, briefing_news)
#define r_close(x) ref_stock_n(x, close)
#define r_fly_news(x) ref_stock_l(x, fly_news)
#define r_has_news(x) (r_source3_news(x) or r_fly_news(x) or r_briefing_news(x))
#define r_has_no_news(x) (NOT r_has_news(x))
#define r_is_halted(x) ref_stock_l(x, is_halted)
#define r_is_hard_to_borrow(x) ref_stock_l(x, is_hard_to_borrow)
#define r_last(x) ref_stock_n(x, last)
#define r_open(x) ref_stock_n(x, open)
#define r_pre_mkt_price(x) ref_stock_n(x, pre_mkt_price)
#define r_source3_news(x) ref_stock_l(x, source3_news)
#define SPY_n(x) RefStockNumericValue('SPY', x)
#define USO_n(x) RefStockNumericValue('USO', x)

#define pre_mkt_price day_bar_close( 1, '08:00-09:26')
#define spy_premkt_perc_chg ((SPY_n(DayBar_Close(ALL_VENUES, 1, YES, '08:00-09:26'))-SPY_n(close))/SPY_n(close))
#define spy_adjusted_close (close * (1 + spy_premkt_perc_chg))
// nested ifs
#define if IF
#define if2(x, y, x2, y2, z) IF(x, y, IF(x2, y2, z))
#define if3(x, y, x2, y2, x3, y3, z) IF(x, y, IF(x2, y2, IF(x3, y3, z)))
#define if4(x, y, x2, y2, x3, y3, x4, y4, z) IF(x, y, IF(x2, y2, IF(x3, y3, IF(x4, y4, z))))
#define if5(x, y, x2, y2, x3, y3, x4, y4, x5, y5, z) IF(x, y, IF(x2, y2, IF(x3, y3, IF(x4, y4, IF(x5, y5, z)))))
#define if6(x, y, x2, y2, x3, y3, x4, y4, x5, y5, x6, y6, z) IF(x, y, IF(x2, y2, IF(x3, y3, IF(x4, y4, IF(x5, y5, IF(x6, y6, z))))))
#define if7(x, y, x2, y2, x3, y3, x4, y4, x5, y5, x6, y6, x7, y7, z) IF(x, y, IF(x2, y2, IF(x3, y3, IF(x4, y4, IF(x5, y5, IF(x6, y6, IF(x7, y7, z)))))))
#define if8(x, y, x2, y2, x3, y3, x4, y4, x5, y5, x6, y6, x7, y7, x8, y8, z) IF(x, y, IF(x2, y2, IF(x3, y3, IF(x4, y4, IF(x5, y5, IF(x6, y6, IF(x7, y7, IF(x8, y8, z))))))))
