//Copyright Paul Reiche, Fred Ford. 1992-2002

/*
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 */

#ifndef _STRINGS_H
#define _STRINGS_H

enum
{
	NULL_PHRASE,
	HELLO_NOW_DOWN_TO_BUSINESS_1,
	HELLO_NOW_DOWN_TO_BUSINESS_2,
	HELLO_NOW_DOWN_TO_BUSINESS_3,
	KNOW_OF_YOU,
	how_know,
	KNOW_BECAUSE,
	what_about_yourselves,
	NO_TALK_ABOUT_OURSELVES,
	what_factors,
	FACTORS_ARE,
	what_about_universe,
	NO_FREE_LUNCH,
	giving_is_good_1,
	GIVING_IS_BAD_1,
	giving_is_good_2,
	GIVING_IS_BAD_2,
	get_on_with_business,
	trade_is_for_the_weak,
	WERE_NOT_AFRAID,
	no_trade_now,
	OK_NO_TRADE_NOW_BYE,
	HELLO_AND_DOWN_TO_BUSINESS_1,
	HELLO_AND_DOWN_TO_BUSINESS_2,
	HELLO_AND_DOWN_TO_BUSINESS_3,
	HELLO_AND_DOWN_TO_BUSINESS_4,
	HELLO_AND_DOWN_TO_BUSINESS_5,
	HELLO_AND_DOWN_TO_BUSINESS_6,
	HELLO_AND_DOWN_TO_BUSINESS_7,
	HELLO_AND_DOWN_TO_BUSINESS_8,
	HELLO_AND_DOWN_TO_BUSINESS_9,
	HELLO_AND_DOWN_TO_BUSINESS_10,
	whats_my_credit,
	HELLO_SLIGHTLY_ANGRY_1,
	HELLO_SLIGHTLY_ANGRY_2,
	HELLO_SLIGHTLY_ANGRY_3,
	explore_relationship,
	EXAMPLE_OF_RELATIONSHIP,
	excuse_1,
	NO_EXCUSE_1,
	excuse_2,
	NO_EXCUSE_2,
	excuse_3,
	NO_EXCUSE_3,
	we_apologize,
	APOLOGY_ACCEPTED,
	so_we_can_attack,
	DECEITFUL_HUMAN,
	bye_melnorme_slightly_angry,
	MELNORME_SLIGHTLY_ANGRY_GOODBYE,
	HELLO_HATE_YOU_1,
	HELLO_HATE_YOU_2,
	HELLO_HATE_YOU_3,
	well_if_thats_the_way_you_feel,
	you_hate_us_so_we_go_away,
	HATE_YOU_GOODBYE,
	WE_FIGHT_AGAIN,
	RESCUE_EXPLANATION,
	RESCUE_AGAIN_1,
	RESCUE_AGAIN_2,
	RESCUE_AGAIN_3,
	RESCUE_AGAIN_4,
	RESCUE_AGAIN_5,
	CHANGED_MIND,
	no_changed_mind,
	yes_changed_mind,
	SHOULD_WE_HELP_YOU,
	yes_help,
	no_help,
	RESCUE_OFFER,
	RESCUE_TANKS,
	RESCUE_HOME,
	take_it,
	leave_it,
	HAPPY_TO_HAVE_RESCUED,
	MAYBE_SEE_YOU_LATER,
	GOODBYE_AND_GOODLUCK,
	GOODBYE_AND_GOODLUCK_AGAIN,
	HELLO_PISSED_OFF_1,
	HELLO_PISSED_OFF_2,
	HELLO_PISSED_OFF_3,
	beg_forgiveness,
	LOTS_TO_MAKE_UP_FOR,
	you_are_so_right,
	ONE_LAST_CHANCE,
	ok_strip_me,
	no_strip_now,
	NOT_WORTH_STRIPPING,
	FAIR_JUSTICE,
	bye_melnorme_pissed_off,
	MELNORME_PISSED_OFF_GOODBYE,
	fight_some_more,
	OK_FIGHT_SOME_MORE,
	why_blue_light,
	BLUE_IS_MAD,
	we_strong_1,
	YOU_NOT_STRONG_1,
	we_strong_2,
	YOU_NOT_STRONG_2,
	we_strong_3,
	YOU_NOT_STRONG_3,
	just_testing,
	REALLY_TESTING,
	yes_really_testing,
	TEST_RESULTS,
	youre_on,
	YOU_GIVE_US_NO_CHOICE,
	TRADING_INFO,
	BUY_OR_SELL,
	goodbye,
	why_turned_purple,
	buy,
	sell,
	TURNED_PURPLE_BECAUSE,
	NOTHING_TO_SELL,
	WHAT_TO_SELL,
	OK_DONE_SELLING,
	sell_life_data,
	SOLD_LIFE_DATA1,
	SOLD_LIFE_DATA2,
	SOLD_LIFE_DATA3,
	sell_rainbow_locations,
	SOLD_RAINBOW_LOCATIONS1,
	SOLD_RAINBOW_LOCATIONS2,
	SOLD_RAINBOW_LOCATIONS3,
	sell_precursor_find,
	SOLD_PRECURSOR_FIND,
	changed_mind_no_sell,
	done_selling,
	NEED_CREDIT,
	WHAT_TO_BUY,
	WHAT_MORE_TO_BUY,
	OK_DONE_BUYING,
	buy_fuel,
	done_buying,
	be_leaving_now,
	HOW_MUCH_FUEL,
	buy_1_fuel,
	GOT_FUEL,
	buy_5_fuel,
	buy_10_fuel,
	buy_25_fuel,
	done_buying_fuel,
	FRIENDLY_GOODBYE,
	CREDIT_IS0,
	CREDIT_IS1,
	NEED_MORE_CREDIT0,
	NEED_MORE_CREDIT1,
	BUY_FUEL_INTRO,
	NO_ROOM_FOR_FUEL,
	buy_info,
	buy_technology,
	buy_current_events,
	buy_alien_races,
	buy_history,
	done_buying_info,
	no_buy_info,
	BUY_INFO_INTRO,
	OK_BUY_INFO,
	OK_NO_BUY_INFO,
	OK_DONE_BUYING_INFO,
	OK_BUY_EVENT_1,
	OK_BUY_EVENT_2,
	OK_BUY_EVENT_3,
	OK_BUY_EVENT_4,
	OK_BUY_EVENT_5,
	OK_BUY_EVENT_6,
	OK_BUY_EVENT_7,
	OK_BUY_EVENT_8,
	OK_BUY_ALIEN_RACE_1,
	OK_BUY_ALIEN_RACE_2,
	OK_BUY_ALIEN_RACE_3,
	OK_BUY_ALIEN_RACE_4,
	OK_BUY_ALIEN_RACE_5,
	OK_BUY_ALIEN_RACE_6,
	OK_BUY_ALIEN_RACE_7,
	OK_BUY_ALIEN_RACE_8,
	OK_BUY_ALIEN_RACE_9,
	OK_BUY_ALIEN_RACE_10,
	OK_BUY_ALIEN_RACE_11,
	OK_BUY_ALIEN_RACE_12,
	OK_BUY_ALIEN_RACE_13,
	OK_BUY_ALIEN_RACE_14,
	OK_BUY_ALIEN_RACE_15,
	OK_BUY_ALIEN_RACE_16,
	OK_BUY_HISTORY_1,
	OK_BUY_HISTORY_2,
	OK_BUY_HISTORY_3,
	OK_BUY_HISTORY_4,
	OK_BUY_HISTORY_5,
	OK_BUY_HISTORY_6,
	OK_BUY_HISTORY_7,
	OK_BUY_HISTORY_8,
	OK_BUY_HISTORY_9,
	INFO_ALL_GONE,
	buy_new_tech,
	no_buy_new_tech,
	done_buying_new_tech,
	fill_me_up,
	OK_FILL_YOU_UP,
	BUY_NEW_TECH_INTRO,
	OK_BUY_NEW_TECH,
	OK_NO_BUY_NEW_TECH,
	OK_DONE_BUYING_NEW_TECH,
	OK_DONE_BUYING_FUEL,
	NEW_TECH_1,
	NEW_TECH_2,
	NEW_TECH_3,
	NEW_TECH_4,
	NEW_TECH_5,
	NEW_TECH_6,
	NEW_TECH_7,
	NEW_TECH_8,
	NEW_TECH_9,
	NEW_TECH_10,
	NEW_TECH_11,
	NEW_TECH_12,
	NEW_TECH_13,
	OK_BUY_NEW_TECH_1,
	OK_BUY_NEW_TECH_2,
	OK_BUY_NEW_TECH_3,
	OK_BUY_NEW_TECH_4,
	OK_BUY_NEW_TECH_5,
	OK_BUY_NEW_TECH_6,
	OK_BUY_NEW_TECH_7,
	OK_BUY_NEW_TECH_8,
	OK_BUY_NEW_TECH_9,
	OK_BUY_NEW_TECH_10,
	OK_BUY_NEW_TECH_11,
	OK_BUY_NEW_TECH_12,
	OK_BUY_NEW_TECH_13,
	CHARITY,
	NEW_TECH_ALL_GONE,
	we_are_from_alliance,
	STRIP_HEAD,
	LANDERS,
	THRUSTERS,
	JETS,
	PODS,
	BAYS,
	DYNAMOS,
	FURNACES,
	GUNS,
	BLASTERS,
	CANNONS,
	TRACKERS,
	DEFENSES,
	name_1,
	name_2,
	name_3,
	name_40,
	name_41,
	ENUMERATE_ONE,
	ENUMERATE_TWO,
	ENUMERATE_THREE,
	ENUMERATE_FOUR,
	ENUMERATE_FIVE,
	ENUMERATE_SIX,
	ENUMERATE_SEVEN,
	ENUMERATE_EIGHT,
	ENUMERATE_NINE,
	ENUMERATE_TEN,
	ENUMERATE_ELEVEN,
	ENUMERATE_TWELVE,
	ENUMERATE_THIRTEEN,
	ENUMERATE_FOURTEEN,
	ENUMERATE_FIFTEEN,
	ENUMERATE_SIXTEEN,
	END_LIST_WITH_AND,
	ENUMERATE_ZERO,
	ENUMERATE_SEVENTEEN,
	ENUMERATE_EIGHTEEN,
	ENUMERATE_NINETEEN,
	ENUMERATE_TWENTY,
	ENUMERATE_THIRTY,
	ENUMERATE_FOURTY,
	ENUMERATE_FIFTY,
	ENUMERATE_SIXTY,
	ENUMERATE_SEVENTY,
	ENUMERATE_EIGHTY,
	ENUMERATE_NINETY,
	ENUMERATE_HUNDRED,
	ENUMERATE_THOUSAND
};

#endif /* _STRINGS_H */
